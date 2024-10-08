## 该分支用于测试mavROS，实现BF固件的F405飞控与Opi的通信
### 软硬件依赖
- 硬件
    - 香橙派5-Pro 64G
    - Aocoda-RC F405飞控 MPU6500版
    - Ch340 USB转串口
- 软件
    - Ubuntu 24.04 (noble)
    - Betaflight V4.3.2
    - ROS2 (jazzy)
    - ROS2使用C++工具包 
### 2024.10.08 bt Nyf --node helloworld
- 实现了使用ROS2节点在终端中打印helloworld
- 出现`rclcpp.hpp no such file or directory`报错，但不影响colcon的编译和最后的运行只是红波浪线看着难受，通过在vscode工作区添加.vscode文件夹并编辑json文件修复该报错

