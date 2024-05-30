#include "car.h"
#include <string.h>
#include <stdio.h>

static bool car_on (void *object);
static bool car_drive (void *object);
static bool car_off (void *object);

bool car_open (car_t *object, char *name, double speed)
{
    bool status = false;

    if (object != NULL && name != NULL && speed > 0.0)
    {
        object->base.object = object;
        object->name = name;
        object->speed = speed;

        object->base.on = car_on;
        object->base.drive = car_drive;
        object->base.off = car_off;

        status = true;
    }

    return status;
}

static bool car_on (void *object)
{
    car_t *car = (car_t *) object;

    printf ("Car: %s engine is on\n", car->name);

    return true;
}

static bool car_drive (void *object)
{
    car_t *car = (car_t *) object;

    printf ("Car: %s, Speed: %.2lf\n", car->name, car->speed);
    
    return true;
}

static bool car_off (void *object)
{
    car_t *car = (car_t *) object;

    printf ("Car: %s engine is off\n", car->name);

    return true;
}