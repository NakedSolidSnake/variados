#ifndef DEVELOPER_H_
#define DEVELOPER_H_

#include <employee.h>

typedef struct 
{
    employee_t employee;
    double bonus;
} developer_t;

bool developer_create (developer_t *object, char *name, double salary, double bonus);
bool developer_get_name (developer_t *object, char **name);
bool developer_get_salary (developer_t *object, double *salary);
bool developer_get_bonus (developer_t *object, double *bonus);

#endif/* DEVELOPER_H_ */
