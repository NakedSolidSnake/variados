#include <stdio.h>
#include <developer.h>

int main (int argc, char *argv[])
{
    developer_t developer;
    double salary;
    double bonus;
    char *name;

    developer_create (&developer, "Cristiano Silva", 1320.0, 100.0);

    developer_get_name (&developer, &name);

    developer_get_salary (&developer, &salary);

    developer_get_bonus (&developer, &bonus);

    printf ("Name: %s - Salary: %.2lf - Bonus: %.2lf\n", name, salary, bonus);

    return 0;
}