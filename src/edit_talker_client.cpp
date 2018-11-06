// Copyright 2018 Zachary Zimits

#include <cstdlib>
#include "ros/ros.h"
#include "beginner_tutorials/EditTalker.h"

int main(int argc, char **argv) {
  ros::init(argc, argv, "edit_talker");
  if (argc != 2) {
    ROS_INFO("usage: edit_talker_client X");
    return 1;
  }

  ros::NodeHandle n;
  ros::ServiceClient client = n.serviceClient
    <beginner_tutorials::EditTalker>("edit_talker");
  beginner_tutorials::EditTalker srv;
  srv.request.a = argv[1];
  if (client.call(srv)) {
      std::string respo = srv.response.b;
      ROS_INFO("Talker has been changed to: %s", respo);
  } else {
    ROS_ERROR("Failed to call service edit_talker");
    return 1;
  }

  return 0;
}
