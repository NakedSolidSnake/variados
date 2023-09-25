#include <class_way_2.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

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

struct person_t *person_create (const char *name, const char *street, int age)
{
    struct person_t *person = NULL;

    if (name != NULL && strlen (name) > 0 && street != NULL && strlen (street) > 0)
    {
        person = (struct person_t *) calloc (1, sizeof (struct person_t));

        if (person != NULL)
        {
            strncpy (person->name, name, PERSON_NAME_SIZE);
            strncpy (person->address.street, street, ADDRESS_STREET_SIZE);
            person->age = age;
        }
    }

    return person;
}