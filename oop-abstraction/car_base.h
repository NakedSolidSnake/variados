#ifndef CAR_BASE_H_
#define CAR_BASE_H_

#include <stdbool.h>

typedef struct 
{
    void *object;
    bool (*on) (void *object);
    bool (*drive) (void *object);
    bool (*off) (void *object);
} car_base_t;

#endif/* CAR_BASE_H_ */
