# Arduino-ROS

I created this package to run my arduino led_strip color patterns on the nano when connected to the RaspPi 4 running Ubuntu 20 server. 

```
ssh ubuntu@<ip address>
```
Enter Password, then run: 
```
roslaunch arduino_ros led_strip.launch
```

## Notes

Created a custom message, SingleColorLED.h within my arduino_ros package. Ensure that catkin_make builds the new message. Ensure that ros_lib contains the new arduino_ros entry when you run in the ~/sketchbook/libraries directory:

```
  rosrun rosserial_arduino make_libraries.py .
```
Just in case look into setting the baud rate within the arduino scripts
```
nh.getHardware()->setBaud(BAUD)
```
As well as setting the baud rate for the usb port on the RaspPi, Ex: setting to 115200
```
sudo stty -F /dev/ttyS0 115200
```
