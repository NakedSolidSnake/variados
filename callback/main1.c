#include <stdio.h>

typedef void (*func_t) (void);

void print (void)
{
    printf ("Hello World.\n");
}

void print_function (func_t callback)
{
    callback ();
}

int main (void)
{
    print_function (print);
    return 0;
}