#include <encapsulation-1.h>
#include <string.h>

bool account_init (account_t *object)
{
    bool status = false;

    if (object != NULL)
    {
        memset (object, 0, sizeof (account_t));
        status = true;
    }

    return status;
}

bool account_open (account_t *object, double initial_value)
{
    bool status = false;

    if (object != NULL && initial_value >= 100.0)
    {
        object->balance += initial_value;

        status = true;
    }

    return status;
}

bool account_withdraw (account_t *object, double value)
{
    bool status = false;

    if (object != NULL && value > 0.0)
    {
        if (value < object->balance)
        {
            object->balance -= value;
            status = true;
        }
    }

    return status;
}

bool account_deposit (account_t *object, double value)
{
    bool status = false;

    if (object != NULL && value > 0.0) 
    {
        object->balance += value;

        status = true;
    }

    return status;
}

bool account_get_balance (account_t *object, double *balance)
{
    bool status = false;

    if (object != NULL && balance != NULL)
    {
        *balance = object->balance;
        status = true;
    }

    return status;
}