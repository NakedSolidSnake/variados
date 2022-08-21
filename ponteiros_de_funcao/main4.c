#include <stdio.h>

typedef void (*func_t) (void);


void print_a (void)
{
    printf ("Olá Mundo\n");
}

void print_b (void)
{
    printf ("Hello World\n");
}

void print_c (void)
{
    printf ("Hallo Welt\n");
}


int main (void)
{
    func_t func [] = 
    {
        print_a,
        print_b,
        print_c
    };

    for (int i = 0; i < 3; i++)
        func [i] ();
    
    return 0;
}