#include <class_way_1.h>
#include <string.h>

bool person_create (struct person_t *person, const char *name, const char *street, int age)
{
    bool status = false;

    if (person != NULL && name != NULL && strlen (name) > 0 && street != NULL && strlen (street) > 0)
    {
        strncpy (person->name, name, PERSON_NAME_SIZE);
        strncpy (person->address.street, street, ADDRESS_STREET_SIZE);
        person->age = age;

        status = true;
    }

    return status;
}