# Differential Drive Robot Simulation Project

## Overview
This project involves simulating a differential drive robot in Gazebo using ROS1 as the operating system. The robot is equipped with a Lidar sensor for obstacle detection and avoidance.

## Features
- Differential drive robot simulation.
- Utilizes ROS1 for communication and control.
- Gazebo and RViz used for simulation environment.
- URDF description for the robot.
- Gazebo plugins for differential drive and Lidar sensor.
- Robot navigates 
- Obstacle detection using Lidar sensor.
- Action: When an obstacle is detected within 1 meter, the robot turns left to avoid it.
- ![Robot navigates](<Start.png>)
- ![Obstacle detection using Lidar sensor](<Trying to Detecting Obstacles.png>) ![]( <Detect the Obstacle.png>)
- ![Action: When an obstacle is detected within 1 meter, the robot turns left to avoid it](<Take an action.png>) ![](<Take Action 2.png>)

## Installation
1. Install ROS1 on your system (if not already installed) [click Here](https://github.com/mustafaahussaam3/ROS_Tasks/blob/master/Task1/RosInstallation.sh)
2. Create catkin-ws
```bash
$ mkdir catkin_ws/
$ cd catkin_ws/
```
2. Create src Folder
```bash
$ mkdir src
$ cd src
```
3. Initalize your Catkin Workspace
```bash
$ catkin_init_workspace
```
4. Clone this project repository.
```bash
$ git clone https://github.com/mustafaahussaam3/Differential-Drive-Robot-using-ROS.git
```
5. Build the project using.
```bash
$ cd ..
$ catkin_make
$ source devel/setup.bash
```
6. Launch the Gazebo simulation with the robot using ROS launch files.
```bash
$ roslaunch Differential-Drive-Robot-using-ROS myrobo.launch 
```

## Usage
1. Launch the simulation environment.
2. Observe the robot's movement.
3. The Lidar sensor detects obstacles within a 1-meter range.
4. When an obstacle is detected, the robot autonomously turns left to avoid it.

## Contribution
Contributions to this project are welcome. You can contribute by:
- Reporting issues or bugs.
- Proposing new features or enhancements.
- Submitting pull requests.

## Contact
For any questions or inquiries, please contact [Mustafa Hussam Eldin](https://www.linkedin.com/in/mustafahussameldin/).

