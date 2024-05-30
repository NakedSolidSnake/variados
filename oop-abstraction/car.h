#ifndef CAR_H_
#define CAR_H_

#include "car_base.h"

typedef struct 
{
    car_base_t base;
    char *name;
    double speed;
} car_t;

bool car_open (car_t *object, char *name, double speed);

#endif/* CAR_H_ */
