#ifndef _MOTOR_H_
#define _MOTOR_H_

#include "mathTool.h"

typedef struct
{
    float throttle;
    float roll;
    float pitch;
    float yaw;
} MOTOR_MIXER_t;

typedef struct
{
    int8_t motorNum;
    MOTOR_MIXER_t motorMixer[8];
} MOTOR_TYPE_t;

#endif






