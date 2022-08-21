#include <stdio.h>

int main (void)
{
    void print_a (void)
    {
        printf ("Olá Mundo\n");
    };

    void (*func) (void) = print_a;

    func ();
    
    return 0;
}