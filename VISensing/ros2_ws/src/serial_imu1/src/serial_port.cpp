#include <iostream>
//#include <sensor_msgs/msg/imu.hpp>
//#include "rclcpp/rclcpp.hpp"

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <termios.h>

// pub.cpp
// C++ Header files
#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <ctime> // Change

// Import the rclcpp client library and std_msgs header
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

// Include our custom message
#include "custom_msg1/msg/log_tf.hpp"    // Change


#ifdef __cplusplus
extern "C"{
#endif

#include "ch_serial.h"

#define IMU_SERIAL  ("/dev/ttyUSB0")
#define BAUD        (B115200)
#define GRA_ACC     (9.8)
#define DEG_TO_RAD  (0.01745329)
#define BUF_SIZE    (1024)
#ifdef __cplusplus
}
#endif

using namespace std::chrono_literals;
using namespace std;
static raw_t raw;

class IMUPublisher : public rclcpp::Node
{
	public:
		int fd = 0;
		uint8_t buf[BUF_SIZE] = {0};
		IMUPublisher() : Node("IMU_publisher")	, count_(0)
		{
			fd = open_serial();
			//imu_pub = this->create_publisher<sensor_msgs::msg::Imu>("/Imu_data", 20);
			publisher_ = this->create_publisher<custom_msg1::msg::LogTf>("string_msg", 10); // Change
			timer_ = this->create_wall_timer(2ms, std::bind(&IMUPublisher::timer_callback, this));
		}

	private: 
		void timer_callback()
		{
			//auto imu_data = sensor_msgs::msg::Imu();
			custom_msg1::msg::LogTf message = custom_msg1::msg::LogTf(); // Change
			int n = read(fd, buf, sizeof(buf));
			//cout << "n: " << n << "\n" << endl;

			for(int i = 0; i < n; i++)
			{
				//cout << "i: " << i << " buf[i]: " << std::hex << int(buf[i]) << std::dec <<"\n" << endl;
				int rev = ch_serial_input(&raw, buf[i]);
				
				//if(raw.item_code[raw.nitem_code - 1] != KItemGWSOL)
				{
					if(rev)
					{
						//imu_data.orientation.x = raw.imu[raw.nimu - 1].voltage;
						//imu_data.orientation.y = raw.imu[raw.nimu - 1].ampere;	
						//imu_data.header.stamp = rclcpp::Clock().now();
						//imu_data.header.frame_id = "base_link " + std::to_string(raw.imu[raw.nimu - 1].id);
						//imu_pub->publish(imu_data);
						  time_t now = time(0); // Change
						  message.time_frame = ctime(&now); // Change
						  message.sensor1 = "Voltage Sensor: " + std::to_string(count_); 
						  message.volt = raw.imu[raw.nimu - 1].voltage;
						  message.sensor2 = "Current Sensor: " + std::to_string(count_); 
						  message.amp = raw.imu[raw.nimu - 1].ampere;
						  
						  // Publish the message
						  publisher_->publish(message);
						  
					}
				}
			}

			memset(buf,0,sizeof(buf));
		}
		

		int open_serial(void)
		{
			struct termios options;

			int fd = open(IMU_SERIAL, O_RDWR | O_NOCTTY);
			tcgetattr(fd,&options);

			if(fd == -1)
			{
				perror("unable to open serial port");
				exit(0);
			}
			
			if(fcntl(fd, F_SETFL, 0) < 0)
				cout << "fcntl failed" << "\n" << endl;
			else
				fcntl(fd, F_SETFL, 0);

			if(isatty(STDIN_FILENO) == 0)
				cout << "standard input is not a terminal device..." << "\n" << endl;
			else
				cout << "isatty success!" << "\n" << endl;

			memset(&options, 0, sizeof(options));

			options.c_cflag = BAUD | CS8 | CLOCAL | CREAD;
			options.c_iflag = IGNPAR;
			options.c_oflag = 0;
			options.c_lflag = 0;
			options.c_cc[VTIME] = 0;
			options.c_cc[VMIN] = 0;
			tcflush(fd, TCIFLUSH);
			tcsetattr(fd, TCSANOW, &options);

			return fd;
		}

		//rclcpp::TimerBase::SharedPtr timer_;
		//rclcpp::Publisher<sensor_msgs::msg::Imu>::SharedPtr imu_pub;
		// Timer objects allow a node to perform a specific action at a specified rate or at a specific time in the future
		rclcpp::TimerBase::SharedPtr timer_;

		// Publisher
		rclcpp::Publisher<custom_msg1::msg::LogTf>::SharedPtr publisher_; // Change

		// Variable to count number of message published
		size_t count_;

};


int main(int argc, const char * argv[])
{
	rclcpp::init(argc, argv);
	rclcpp::spin(std::make_shared<IMUPublisher>());
	rclcpp::shutdown();

	return 0;
}
