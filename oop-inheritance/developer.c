#include <developer.h>
#include <string.h>

bool developer_create (developer_t *object, char *name, double salary, double bonus)
{
    bool status = false;

    if (object != NULL)
    {
        status = employee_create (object, name, salary);

        if (status == true)
            object->bonus = bonus;
    }

    return status;
}

bool developer_get_name (developer_t *object, char **name)
{
    bool status = false;

    if (object != NULL)
    {
        status = employee_get_name (object, name);
    }

    return status;
}

bool developer_get_salary (developer_t *object, double *salary)
{
    bool status = false;

    if (object != NULL)
    {
        status = employee_get_salary (object, salary);
    }

    return status;
}

bool developer_get_bonus (developer_t *object, double *bonus)
{
    bool status = false;

    if (object != NULL && bonus != NULL)
    {
        *bonus = object->bonus;
        status = true;
    }

    return status;
}