 [![License](https://img.shields.io/badge/License-BSD%203--Clause-blue.svg)](https://opensource.org/licenses/BSD-3-Clause)

# beginner_tutorials
Beginner ROS tutorials for ENPM-808X

## Setup and Build

This package is designed for ROS kinetic. It will be assumed that ROS kinetic is already installed and that a catkin workspace called catkin_ws is already setup on your machine. 

Begin by cloning the directory into the src directory of your catkin workspace.

```
cd /<path to catkin_ws>/src
git clone https://github.com/zzimits/beginner_tutorials
git checkout Week10_HW
cd ~/catkin_ws
. ~/catkin_ws/devel/setup.bash
catkin_make
```
## Running

In one terminal ensure that roscore is running by executing:

````
roscore
````
To run the two nodes in seperate windows open two terminal windows and run one of the below lines in each of the terminals.
```
rosrun beginner_tutorials talker
rosrun beginner_tutorials listener
```

To Run as a launch file open a second terminal window and execute:
```
roslaunch beginner_tutorials week10.launch
```

This default roslaunch command will set the rate of the talker to 10hz if you would like to set it to a different value from the command line use:

```
roslaunch beginner_tutorials week10.launch rate:=<desired hz>

```


## Services

Once the launch file is running in the second terminal you can navigate to a thrid terminal and use the EditTalker service to modify the message being sent by talker. To do this run:

```
rosservice call /edit_talker "<desired message>"
```
