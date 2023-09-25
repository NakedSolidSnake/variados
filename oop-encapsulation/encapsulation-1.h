#ifndef ENCAPSULATION_1_H_
#define ENCAPSULATION_1_H_

#include <stdbool.h>

typedef struct
{
    double balance;    
} account_t;

bool account_init (account_t *object);
bool account_open (account_t *object, double initial_value);
bool account_withdraw (account_t *object, double value);
bool account_deposit (account_t *object, double value);

bool account_get_balance (account_t *object, double *balance);

#endif/* ENCAPSULATION_1_H_ */
