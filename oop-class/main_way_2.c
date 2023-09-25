#include <class_way_2.h>
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
    struct person_t *person = person_create ("Cristiano Silva", "Rua dos Bobos", 25);

    if (person != NULL)
    {
        printf ("Person created successfully\n");

        // process

        free (person);
    }

    return 0;
}