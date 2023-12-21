#include <unistd.h>
#include <memory>
#include <iostream>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include <sensor_msgs/msg/imu.hpp>
#include <iomanip>

rclcpp::Node::SharedPtr nh = nullptr;
using namespace std;

void topic_callback(const sensor_msgs::msg::Imu::SharedPtr msg)
{

	cout << "header:" << "\n";
	cout << "	" << "stamp:"<< "\n";
	cout << "	  " << "secs:" << msg->header.stamp.sec<< "\n";
	cout << "	" << "frame_id:" << msg->header.frame_id << "\n" ;

	cout << "sensor values:" << "\n";
	cout << "	" << "voltage: " << fixed << setprecision(2) << msg->orientation.x << "\n";
	cout << "	" << "ampere: " << fixed << setprecision(2) << msg->orientation.y << "\n";

	cout  << "---" << endl;
}


int main(int argc,const char* argv[])
{
	rclcpp::init(argc, argv);
	nh = std::make_shared<rclcpp::Node>("imu_sub");
	rclcpp::Subscription<sensor_msgs::msg::Imu>::SharedPtr imu_sub ;
	imu_sub = nh->create_subscription<sensor_msgs::msg::Imu>("Imu_data", 10,topic_callback);
	rclcpp::spin(nh);
	rclcpp::shutdown();

	return 0;
}
