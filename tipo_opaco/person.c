#include "person.h"
#include <string.h>
#include <stdlib.h>

struct person_t
{
    char name [200];
    char address [200];
};

person_t *person_create (const char *name, const char *address)
{
    person_t *person = (person_t *)malloc (sizeof (struct person_t));
    if (person != NULL)
    {
        strncpy (person->name, name, 200);
        strncpy (person->address, address, 200);
    }

    return person;
}

void person_set_name (person_t *person, const char *name)
{
    strncpy (person->name, name, 200);
}

void person_set_address (person_t *person, const char *address)
{
    strncpy (person->address, address, 200);
}

char *person_get_name (person_t *person)
{
    return person->name;
}

char *person_get_address (person_t *person)
{
    return person->address;
}