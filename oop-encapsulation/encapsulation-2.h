#ifndef ENCAPSULATION_2_H_
#define ENCAPSULATION_2_H_

#include <stdbool.h>

typedef struct account_t account_t;

account_t *account_open (double value);

bool account_withdraw (account_t *object, double value);
bool account_deposit (account_t *object, double value);

bool account_get_balance (account_t *object, double *balance);
bool account_close (account_t *object);

#endif/* ENCAPSULATION_2_H_ */
