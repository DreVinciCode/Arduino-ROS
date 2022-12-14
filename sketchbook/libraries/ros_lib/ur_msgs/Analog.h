#ifndef _ROS_ur_msgs_Analog_h
#define _ROS_ur_msgs_Analog_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace ur_msgs
{

  class Analog : public ros::Msg
  {
    public:
      typedef uint8_t _pin_type;
      _pin_type pin;
      typedef uint8_t _domain_type;
      _domain_type domain;
      typedef float _state_type;
      _state_type state;
      enum { CURRENT = 0 };
      enum { VOLTAGE = 1 };

    Analog():
      pin(0),
      domain(0),
      state(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->pin >> (8 * 0)) & 0xFF;
      offset += sizeof(this->pin);
      *(outbuffer + offset + 0) = (this->domain >> (8 * 0)) & 0xFF;
      offset += sizeof(this->domain);
      union {
        float real;
        uint32_t base;
      } u_state;
      u_state.real = this->state;
      *(outbuffer + offset + 0) = (u_state.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_state.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_state.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_state.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->state);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      this->pin =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->pin);
      this->domain =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->domain);
      union {
        float real;
        uint32_t base;
      } u_state;
      u_state.base = 0;
      u_state.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_state.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_state.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_state.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->state = u_state.real;
      offset += sizeof(this->state);
     return offset;
    }

    virtual const char * getType() override { return "ur_msgs/Analog"; };
    virtual const char * getMD5() override { return "f41c08a810adf63713aec88712cd553d"; };

  };

}
#endif
