#include "ros/ros.h"
#include "geometry_msgs/Twist.h"
#include "sensor_msgs/LaserScan.h"

class MyroboMove 
{
public: 
  MyroboMove(){
    pub =  nh1.advertise<geometry_msgs::Twist>("/cmd_vel",1000);
  }

   void counterCallBack(const sensor_msgs::LaserScanConstPtr& msg){
    ROS_INFO("%f", msg -> ranges[0]);
    ROS_INFO("%f", msg -> ranges[360]);
    ROS_INFO("%f", msg -> ranges[719]);


    ros::Rate rate(100);
    geometry_msgs::Twist vel;

    if(msg -> ranges[360]  > 1){
      vel.linear.x = 0.7;
      vel.angular.z = 0.0;
      pub.publish(vel);
      ROS_INFO("Linear Velocity: %f, Angular Velocity: %f", vel.linear.x, vel.angular.z);

    }

   if(msg -> ranges[360] < 1 ){
      vel.linear.x = 0.0;
      vel.angular.z = 0.2;
      pub.publish(vel);
      ROS_INFO("Linear Velocity: %f, Angular Velocity: %f", vel.linear.x, vel.angular.z);

    }

   if(msg -> ranges[0] < 1){
      vel.linear.x = 0.0;
      vel.angular.z = 0.5;
      pub.publish(vel);
      ROS_INFO("Linear Velocity: %f, Angular Velocity: %f", vel.linear.x, vel.angular.z);

    }

   if(msg -> ranges[719] < 1) {
      vel.linear.x = 0.0;
      vel.angular.z = -0.5;
      pub.publish(vel);
      ROS_INFO("Linear Velocity: %f, Angular Velocity: %f", vel.linear.x, vel.angular.z);

    }

    rate.sleep();
    } 

private: 
  ros::NodeHandle nh1;
  ros::Publisher pub;
};

int main(int argc, char **argv){ 

  ros::init(argc, argv, "move_robot_node");
  ros::NodeHandle nh;
  ros::Subscriber sub;
  MyroboMove move;
  sub = nh.subscribe("scan", 1000, &MyroboMove::counterCallBack, &move);
  ros::spin(); 
  return 0;

}