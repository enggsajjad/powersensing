#include <unistd.h>
//#include <memory>
#include <iostream>
//#include "rclcpp/rclcpp.hpp"
//#include "std_msgs/msg/string.hpp"
//#include <sensor_msgs/msg/imu.hpp>
#include <iomanip>
// sub.cpp
// C++ Header files
#include <memory>

// Import the rclcpp client library and std_msgs header
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

// Include our custom message
#include "custom_msg1/msg/log_tf.hpp" //change


rclcpp::Node::SharedPtr nh = nullptr;
using namespace std;
// creation of function objects with placeholder arguments
using std::placeholders::_1;


// SubscriberNode Composition
//We create a SubscriberNode class that inherits from the rclcpp::Node
class SubscriberNode : public rclcpp::Node
{
  public:
    SubscriberNode()
    : Node("subscriber")
    {
      // Create a subscriber with String message type and queue size is 10
      subscription_ = this->create_subscription<custom_msg1::msg::LogTf>(
      "string_msg", 10, std::bind(&SubscriberNode::callback, this, _1)); //change
    }

  private:
    // The moment the message available in the queue and 
    // the call back execute the print statement
    void callback(const custom_msg1::msg::LogTf::SharedPtr msg) const
    {
      RCLCPP_INFO(this->get_logger(), "I got: '%s'", msg->time_frame.c_str()); //change
      RCLCPP_INFO(this->get_logger(), "%s", msg->sensor1.c_str()); //change
      RCLCPP_INFO(this->get_logger(), "%d", msg->volt); //change
      RCLCPP_INFO(this->get_logger(), "%s", msg->sensor2.c_str()); //change
      RCLCPP_INFO(this->get_logger(), "%d", msg->amp); //change
    }

    // Subscriber
    rclcpp::Subscription<custom_msg1::msg::LogTf>::SharedPtr subscription_;
};

int main(int argc, char * argv[])
{
  // Initialize the ROS2 communication
  rclcpp::init(argc, argv);

  // Create a default single-threaded executor and spin the SubscriberNode node
  rclcpp::spin(std::make_shared<SubscriberNode>());

  // Shutdown the ROS2 communication
  rclcpp::shutdown();
  
  return 0;
}


/*
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
*/