// Copyright 2018 Zachary Zimits

#include "ros/ros.h"
#include "beginner_tutorials/EditTalker.h"

bool add(beginner_tutorials::EditTalker::Request  &req,
    beginner_tutorials::EditTalker::Response &res) {
  std::string my_string = req.a;
  res.b = my_string;
  ROS_INFO("I am changing talker to: %s", my_string);
  ros::param::set("relative_param", my_string);
  return true;
}

int main(int argc, char **argv) {
  ros::init(argc, argv, "edit_talker_server");
  ros::NodeHandle n;
  ROS_INFO("Ready to edit talker");
  ros::ServiceServer service = n.advertiseService("edit_talker", add);

  ros::spin();

  return 0;
}
