#ifndef _ROS_robotiq_85_msgs_GripperCmd_h
#define _ROS_robotiq_85_msgs_GripperCmd_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace robotiq_85_msgs
{

  class GripperCmd : public ros::Msg
  {
    public:
      typedef bool _emergency_release_type;
      _emergency_release_type emergency_release;
      typedef uint32_t _emergency_release_dir_type;
      _emergency_release_dir_type emergency_release_dir;
      typedef bool _stop_type;
      _stop_type stop;
      typedef float _position_type;
      _position_type position;
      typedef float _speed_type;
      _speed_type speed;
      typedef float _force_type;
      _force_type force;

    GripperCmd():
      emergency_release(0),
      emergency_release_dir(0),
      stop(0),
      position(0),
      speed(0),
      force(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_emergency_release;
      u_emergency_release.real = this->emergency_release;
      *(outbuffer + offset + 0) = (u_emergency_release.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->emergency_release);
      *(outbuffer + offset + 0) = (this->emergency_release_dir >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->emergency_release_dir >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->emergency_release_dir >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->emergency_release_dir >> (8 * 3)) & 0xFF;
      offset += sizeof(this->emergency_release_dir);
      union {
        bool real;
        uint8_t base;
      } u_stop;
      u_stop.real = this->stop;
      *(outbuffer + offset + 0) = (u_stop.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->stop);
      union {
        float real;
        uint32_t base;
      } u_position;
      u_position.real = this->position;
      *(outbuffer + offset + 0) = (u_position.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_position.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_position.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_position.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->position);
      union {
        float real;
        uint32_t base;
      } u_speed;
      u_speed.real = this->speed;
      *(outbuffer + offset + 0) = (u_speed.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_speed.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_speed.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_speed.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->speed);
      union {
        float real;
        uint32_t base;
      } u_force;
      u_force.real = this->force;
      *(outbuffer + offset + 0) = (u_force.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_force.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_force.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_force.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->force);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_emergency_release;
      u_emergency_release.base = 0;
      u_emergency_release.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->emergency_release = u_emergency_release.real;
      offset += sizeof(this->emergency_release);
      this->emergency_release_dir =  ((uint32_t) (*(inbuffer + offset)));
      this->emergency_release_dir |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->emergency_release_dir |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->emergency_release_dir |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->emergency_release_dir);
      union {
        bool real;
        uint8_t base;
      } u_stop;
      u_stop.base = 0;
      u_stop.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->stop = u_stop.real;
      offset += sizeof(this->stop);
      union {
        float real;
        uint32_t base;
      } u_position;
      u_position.base = 0;
      u_position.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_position.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_position.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_position.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->position = u_position.real;
      offset += sizeof(this->position);
      union {
        float real;
        uint32_t base;
      } u_speed;
      u_speed.base = 0;
      u_speed.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_speed.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_speed.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_speed.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->speed = u_speed.real;
      offset += sizeof(this->speed);
      union {
        float real;
        uint32_t base;
      } u_force;
      u_force.base = 0;
      u_force.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_force.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_force.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_force.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->force = u_force.real;
      offset += sizeof(this->force);
     return offset;
    }

    const char * getType(){ return "robotiq_85_msgs/GripperCmd"; };
    const char * getMD5(){ return "017fc0d464f4a4d072ae2519e0fc1789"; };

  };

}
#endif
