#include "car_control.h"
#include "car.h"
#include <stdio.h>

int main (void)
{
    car_t car;
    car_control_t control;

    do 
    {
        if (car_open (&car, "Toyota", 100) == false)
        {
            printf ("%s\n", "Error: Car cannot be initialized");
            break;
        }

        if (car_control_init (&control, &car) == false)
        {
            printf ("%s\n", "Error: Car Control cannot be initialized");
            break;
        }

        car_control_drive (&control, 5);

    } while (false);
}