#include <stdio.h>

void print (void)
{
    printf ("Hello World.\n");
}

int main (void)
{
    void (*func) (void) = print;

    func ();

    printf ("Endereço: %p\n", print);
    return 0;
}