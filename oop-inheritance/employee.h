#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include <stdbool.h>

typedef struct 
{
    char name [200];
    double salary;
} employee_t;

bool employee_create (employee_t *object, char *name, double salary);
bool employee_get_name (employee_t *object, char **name);
bool employee_get_salary (employee_t *object, double *salary);

#endif/* EMPLOYEE_H_ */
