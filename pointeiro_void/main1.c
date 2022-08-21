#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef void (*func_t) (void);

void print (void)
{
    printf ("Hello World\n");
}

void *get_message (void)
{
    char *message = "Olá Mundo";
    return (void *)message;
}

int main (void)
{
    char letter = 'A';
    int number = 12132;
    float price = 5.56;

    void *p = &letter;
    printf ("char : %c\n", *(char *)p);

    p = &number;
    printf ("int : %d\n", *(int *)p);

    p = &price;
    printf ("float : %f\n", *(float *)p);

    p = print;

    ((func_t)p)();

    p = get_message ();
    printf ("string : %s\n", (char *)p);
    return 0;
}