#include "car_control.h"
#include <unistd.h>
#include <string.h>

bool car_control_init (car_control_t *object, car_base_t *base)
{
    bool status = false;

    if (object != NULL && base != NULL)
    {
        object->base = base;

        status = true;
    }

    return status;
}

bool car_control_drive (car_control_t *object, unsigned int time)
{
    bool status = false;
    unsigned int elapsed = 1;

    if (object != NULL)
    {

        do
        {
            if (object->base->on (object->base) == false)
            {
                status = false;
                break;
            }

            while (object->base->drive (object->base) == true && elapsed < time)
            {
                sleep (elapsed ++);
            }

            status = object->base->off (object->base);
            
        } while (false);

        status = true;
    }

    return status;
}