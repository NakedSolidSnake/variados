#include <stdio.h>



int sum (int a, int b, int c)
{
    return a + b + c;
}

int main (void)
{
    int (*func) (int, int ,int) = sum;

    printf ("Sum: %d\n", func (10, 10, 10));
    return 0;
}