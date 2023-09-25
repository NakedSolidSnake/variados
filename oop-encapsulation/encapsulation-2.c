#include <encapsulation-2.h>
#include <string.h>
#include <stdlib.h>

struct account_t
{
    double balance;
};

account_t *account_open (double value)
{
    account_t *account = NULL;

    if (value >= 100.0 )
    {
        account = (account_t *) calloc (1, sizeof (struct account_t));

        if (account != NULL)
        {
            account->balance += value;
        }
    }

    return account;
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

bool account_close (account_t *object)
{
     bool status = false;

    if (object != NULL) 
    {
        free (object);

        status = true;
    }

    return status;
}