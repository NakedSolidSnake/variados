#include <employee.h>
#include <string.h>

bool employee_create (employee_t *object, char *name, double salary)
{
    bool status = false;

    if (object != NULL && name != NULL && strlen (name) > 0)
    {
        memset (object, 0, sizeof (employee_t));

        strncpy (object->name, name, 199);
        object->salary = salary;

        status = true;
    }

    return status;
}

bool employee_get_name (employee_t *object, char **name)
{
    bool status = false;

    if (object != NULL && name != NULL)
    {
        *name = object->name;

        status = true;
    }

    return status;
}

bool employee_get_salary (employee_t *object, double *salary)
{
    bool status = false;

    if (object != NULL && salary != NULL)
    {
        *salary = object->salary;
        
        status = true;
    }

    return status;
}