#ifndef _ROS_robotiq_85_msgs_GripperStat_h
#define _ROS_robotiq_85_msgs_GripperStat_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace robotiq_85_msgs
{

  class GripperStat : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef bool _is_ready_type;
      _is_ready_type is_ready;
      typedef bool _is_reset_type;
      _is_reset_type is_reset;
      typedef bool _is_moving_type;
      _is_moving_type is_moving;
      typedef bool _obj_detected_type;
      _obj_detected_type obj_detected;
      typedef uint8_t _fault_status_type;
      _fault_status_type fault_status;
      typedef float _position_type;
      _position_type position;
      typedef float _requested_position_type;
      _requested_position_type requested_position;
      typedef float _current_type;
      _current_type current;

    GripperStat():
      header(),
      is_ready(0),
      is_reset(0),
      is_moving(0),
      obj_detected(0),
      fault_status(0),
      position(0),
      requested_position(0),
      current(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      union {
        bool real;
        uint8_t base;
      } u_is_ready;
      u_is_ready.real = this->is_ready;
      *(outbuffer + offset + 0) = (u_is_ready.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->is_ready);
      union {
        bool real;
        uint8_t base;
      } u_is_reset;
      u_is_reset.real = this->is_reset;
      *(outbuffer + offset + 0) = (u_is_reset.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->is_reset);
      union {
        bool real;
        uint8_t base;
      } u_is_moving;
      u_is_moving.real = this->is_moving;
      *(outbuffer + offset + 0) = (u_is_moving.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->is_moving);
      union {
        bool real;
        uint8_t base;
      } u_obj_detected;
      u_obj_detected.real = this->obj_detected;
      *(outbuffer + offset + 0) = (u_obj_detected.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->obj_detected);
      *(outbuffer + offset + 0) = (this->fault_status >> (8 * 0)) & 0xFF;
      offset += sizeof(this->fault_status);
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
      } u_requested_position;
      u_requested_position.real = this->requested_position;
      *(outbuffer + offset + 0) = (u_requested_position.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_requested_position.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_requested_position.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_requested_position.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->requested_position);
      union {
        float real;
        uint32_t base;
      } u_current;
      u_current.real = this->current;
      *(outbuffer + offset + 0) = (u_current.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_current.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_current.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_current.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->current);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      union {
        bool real;
        uint8_t base;
      } u_is_ready;
      u_is_ready.base = 0;
      u_is_ready.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->is_ready = u_is_ready.real;
      offset += sizeof(this->is_ready);
      union {
        bool real;
        uint8_t base;
      } u_is_reset;
      u_is_reset.base = 0;
      u_is_reset.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->is_reset = u_is_reset.real;
      offset += sizeof(this->is_reset);
      union {
        bool real;
        uint8_t base;
      } u_is_moving;
      u_is_moving.base = 0;
      u_is_moving.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->is_moving = u_is_moving.real;
      offset += sizeof(this->is_moving);
      union {
        bool real;
        uint8_t base;
      } u_obj_detected;
      u_obj_detected.base = 0;
      u_obj_detected.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->obj_detected = u_obj_detected.real;
      offset += sizeof(this->obj_detected);
      this->fault_status =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->fault_status);
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
      } u_requested_position;
      u_requested_position.base = 0;
      u_requested_position.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_requested_position.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_requested_position.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_requested_position.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->requested_position = u_requested_position.real;
      offset += sizeof(this->requested_position);
      union {
        float real;
        uint32_t base;
      } u_current;
      u_current.base = 0;
      u_current.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_current.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_current.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_current.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->current = u_current.real;
      offset += sizeof(this->current);
     return offset;
    }

    const char * getType(){ return "robotiq_85_msgs/GripperStat"; };
    const char * getMD5(){ return "b008656b72baf8ed957040c01e114fed"; };

  };

}
#endif
