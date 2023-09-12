#include "ros/ros.h"
#include "geometry_msgs/Twist.h"
#include "sensor_msgs/LaserScan.h"


int main(int argc, char **argv){ 

ros::init(argc, argv,"move_robot_node");
ros::NodeHandle nh;
ros::Publisher pub = nh.advertise<geometry_msgs::Twist>("cmd_vel", 1000);
ros::Rate loop_rate(2);
geometry_msgs::Twist vel ;
//vel.linear.y = -20;
  
  while (ros::ok()){

    pub.publish(vel);
    ros::spinOnce();
    loop_rate.sleep();
  }

return 0;
}
