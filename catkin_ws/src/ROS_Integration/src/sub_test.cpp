#include "ros/ros.h"
#include <geometry_msgs/Vector3.h>

float x_test;
float y_test;
float z_test;

void init_vals()
{
    x_test = 0.0;
    y_test = 0.0;
    z_test = 0.0;
}

void chatterCallback(const geometry_msgs::Vector3::ConstPtr& msg)
{
    x_test = msg->x;
    y_test = msg->y;
    z_test = msg->z;

    std::cout << "x: " << x_test << "  y: "<< y_test << "  z: " << z_test << std::endl;
}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "unreal_sub"); 
    ros::NodeHandle n;
    init_vals();
    
    ros::Subscriber sub = n.subscribe<geometry_msgs::Vector3>
                    ("player_position", 10, &chatterCallback);

    ros::spin();
    return 0;
}
