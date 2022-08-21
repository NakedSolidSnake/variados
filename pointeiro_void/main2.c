#include <stdio.h>
#include <stdlib.h>

typedef void (*func_t) (void);

typedef enum 
{
    type_char,
    type_int,
    type_float,
    type_function,
    type_person,
} type_t;

typedef struct 
{
    type_t type;
    void *data;
} generic_t;

void print (void)
{
    printf ("Hello World\n");
}

typedef struct 
{
    char *name;
    char *address;
} person_t;

void print_person (person_t *p)
{
    printf ("Name: %s, Address: %s\n", p->name, p->address);
}

int main (void)
{
    person_t person = 
    {
        .name = "Cristiano",
        .address = "Rua dos bobos"
    };

    char letter = 'A';
    int number = 10;
    float value = 3.1415;
    generic_t generics [] = 
    {
        {.type = type_char, .data = &letter},
        {.type = type_int,  .data = &number},
        {.type = type_float, .data = &value},
        {.type = type_function, .data = print},
        {.type = type_person, .data = &person},
    };
    
    for (int i = 0; i < 5; i++)
    {
        switch (generics[i].type)
        {
        case type_char:
            printf ("%c\n", *(char *)generics[i].data);
            break;

        case type_int:
            printf ("%d\n", *(int *)generics[i].data);
            break;

        case type_float:
            printf ("%f\n", *(float *)generics[i].data);
            break;

        case type_function:
            ((func_t)generics[i].data) ();
            break;

        case type_person:
            print_person (generics[i].data);            
            break;
        
        default:
            break;
        }
    }
    

    return 0;
}