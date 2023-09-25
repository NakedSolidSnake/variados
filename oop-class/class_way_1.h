#ifndef CLASS_ERROR_H_
#define CLASS_ERROR_H_

#include <stdbool.h>

#define ADDRESS_STREET_SIZE 100
#define PERSON_NAME_SIZE    100

struct address_t 
{
    char street [ADDRESS_STREET_SIZE + 1];
};

struct person_t
{
    char name [PERSON_NAME_SIZE + 1];
    struct address_t address;
    int age;
};

bool person_create (struct person_t *person, const char *name, const char *street, int age);

#endif/* CLASS_ERROR_H_ */
