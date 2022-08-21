#include <stdio.h>

typedef int (*func_t) (int, int ,int);


int sum (int a, int b, int c)
{
    return a + b + c;
}

int main (void)
{
    func_t func = sum;

    printf ("Sum: %d\n", func (10, 10, 10));
    return 0;
}