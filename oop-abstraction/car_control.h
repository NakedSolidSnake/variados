#ifndef CAR_CONTROL_H_
#define CAR_CONTROL_H_

#include "car_base.h"

typedef struct 
{
    car_base_t *base;
} car_control_t;

bool car_control_init (car_control_t *object, car_base_t *base);
bool car_control_drive (car_control_t *object, unsigned int time);

#endif/* CAR_CONTROL_H_ */
