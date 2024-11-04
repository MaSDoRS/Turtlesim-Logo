//Pada kode ini saya akan memakai bahasa python

//Set up awal
source /opt/ros/humble/setup.bash

//Set up turtlesim
sudo apt update
sudo apt install ros-humble-turtlesim

//Menjalankan jendela turtle
ros2 run turtlesim turtlesim_node

//mengubah background menjadi warna putih
ros2 param set /turtlesim background_r 255
ros2 param set /turtlesim background_g 255
ros2 param set /turtlesim background_b 255

//set up rqt agar bisa mengubah warna jalur
sudo apt update
sudo apt install '~nros-humble-rqt*'

//jalankan rqt
rqt


//Summon turtle2 di jendela turtlesim yang sudah ada dengan Ros2 service
ros2 service call /spawn turtlesim/srv/Spawn "{x: 4.5, y: 1.2, theta: 0.0, name: 'turtle2'}"

//Menggerakkan turtle2 melingkar sampai dikill setelah memenuhi 1 lingkaran
ros2 topic pub /turtle2/cmd_vel geometry_msgs/msg/Twist "{linear: {x: 5.0, y: 0.0, z: 0.0}, angular: {x: 0.0, y: 0.0, z: 1.0}}"

//Menggerakkan turtle1
//Menggerakkan turte1 dari titik awal (0,0) ke titik A
ros2 topic pub --once  /turtle1/cmd_vel geometry_msgs/msg/Twist "{linear: {x: -2.5, y: 1.8, z: 0.0}, angular: {x: 0.0, y: 0.0, z: 0.0}}"

//Menggerakkan turte1 dari titik awal A ke titik B
ros2 topic pub --once  /turtle1/cmd_vel geometry_msgs/msg/Twist "{linear: {x: 0.0, y: 1.2, z: 0.0}, angular:{x: 0.0, y: 0.0, z: 0.0}}"

//Menggerakkan turte1 dari titik awal B ke titik C
ros2 topic pub --once  /turtle1/cmd_vel geometry_msgs/msg/Twist "{linear: {x: 3.5, y: -1.8, z: 0.0}, angular:{x: 0.0, y: 0.0, z: 0.0}}"

//Menggerakkan turte1 dari titik awal C ke titik D
ros2 topic pub --once  /turtle1/cmd_vel geometry_msgs/msg/Twist "{linear: {x: 0.0, y: -2.4, z: 0.0}, angular: {x: 0.0, y: 0.0, z: 0.0}}"

//Menggerakkan turte1 dari titik awal D ke titik E
ros2 topic pub --once  /turtle1/cmd_vel geometry_msgs/msg/Twist "{linear: {x: -1.0, y: -0.4, z: 0.0}, angular: {x: 0.0, y: 0.0, z: 0.0}}"

//Menggerakkan turte1 dari titik awal E ke titik F
ros2 topic pub --once  /turtle1/cmd_vel geometry_msgs/msg/Twist "{linear: {x: 1.0, y: -0.4, z: 0.0}, angular: {x: 0.0, y: 0.0, z: 0.0}}"

//Menggerakkan turte1 dari titik awal F ke titik G
ros2 topic pub --once  /turtle1/cmd_vel geometry_msgs/msg/Twist "{linear: {x: 0.0, y: -0.8, z: 0.0}, angular:{x: 0.0, y: 0.0, z: 0.0}}"

//Menggerakkan turte1 dari titik awal G ke titik H
ros2 topic pub --once  /turtle1/cmd_vel geometry_msgs/msg/Twist "{linear: {x: -2.0, y: 0.8, z: 0.0}, angular: {x: 0.0, y: 0.0, z: 0.0}}"

//Menggerakkan turte1 dari titik awal H ke titik I
ros2 topic pub --once  /turtle1/cmd_vel geometry_msgs/msg/Twist "{linear: {x: -1.5, y: -0.6, z: 0.0}, angular: {x: 0.0, y: 0.0, z: 0.0}}"

//Menggerakkan turte1 dari titik awal I ke titik J
ros2 topic pub --once  /turtle1/cmd_vel geometry_msgs/msg/Twist "{linear: {x: 0.0, y: 3.0, z: 0.0}, angular: {x: 0.0, y: 0.0, z: 0.0}}"

//Menggerakkan turte1 dari titik awal J ke titik K
ros2 topic pub --once  /turtle1/cmd_vel geometry_msgs/msg/Twist "{linear: {x: 1.0, y: -0.6, z: 0.0}, angular:{x: 0.0, y: 0.0, z: 0.0}}"

//Menggerakkan turte1 dari titik awal K ke titik L
ros2 topic pub --once  /turtle1/cmd_vel geometry_msgs/msg/Twist "{linear: {x: 0.0, y: -1.0, z: 0.0}, angular: {x: 0.0, y: 0.0, z: 0.0}}"

//Menggerakkan turte1 dari titik awal L ke titik M
ros2 topic pub --once  /turtle1/cmd_vel geometry_msgs/msg/Twist "{linear: {x: 1.5, y: 1.0, z: 0.0}, angular: {x: 0.0, y: 0.0, z: 0.0}}"