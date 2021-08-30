# UnrealVR_ROS
Contains files that use ROS Integration with Unreal Engine 4 and ROS Melodic. For this repository, the files are used to integrate ROS capabalities alongside with UE4 to create a virtual reality interface to conduct unmanned air traffic management (UTM) for unmanned aerial systems (UAS).<br/>

## Setting Up and Using ROS Integration
To setup ROS Integration follow the setup steps from https://github.com/code-iai/ROSIntegration

### IMPORTANT NOTE:
However, do not install ROSBridge with their method. Instead, do the following...<br/>

$cd ~/"your workspace name"/src<br/>
$git clone -b 0.9.0 https://github.com/RobotWebTools/rosbridge_suite.git<br/>
$cd ..<br/>
$catkin build<br/>
$source ./devel/setup.bash<br/>

The reason for this is because ROS Integration is not compatible with ROSBridge's new transmission method. Which is why ROSBridge is downgraded to 0.9.0, which is compatible with the current version of ROSIntegration.

