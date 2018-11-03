#include "ros/ros.h"
#include "beginner_tutorials/AddTwoInts.h"

bool add(beginner_tutorials::AddTwoInts::Request  &req,
         beginner_tutorials::AddTwoInts::Response &res)
{
  std::string my_string = req.a;
	res.b = my_string;
	ROS_INFO("I am changing talker to: %s",my_string);
	ros::param::set("relative_param", my_string);
  return true;
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "add_two_ints_server");
  ros::NodeHandle n;
  ROS_INFO("Ready to modify talker");
  ros::ServiceServer service = n.advertiseService("add_two_ints", add);
 
  ros::spin();

  return 0;
}
