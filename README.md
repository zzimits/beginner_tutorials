# beginner_tutorials
Beginner ROS tutorials for ENPM-808X

## Setup and Build

This package is designed for ROS kinetic. It will be assumed that ROS kinetic is already installed and set up. Begin by setting up a catkin workspace if you have already one set up skip the next code block.
```
source /opt/ros/melodic/setup.bash
mkdir -p ~/catkin_ws/src
cd ~/catkin_ws/
catkin_make
source devel/setup.bash
```
Clone the repository into the src directory.

```
cd ~/catkin_ws/src
git clone https://github.com/zzimits/beginner_tutorials
cd ~/catkin_ws
catkin_make
```
## Running

Ensure that roscore is running

````
roscore
````
In two new terminal windows run the following lines respectivly:
```
rosrun beginner_tutorials talker
rosrun beginner_tutorials listener
```
