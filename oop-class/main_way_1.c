#include <class_way_1.h>
#include <stdio.h>

int main (int argc, char *argv[])
{
    struct person_t person;
    
    bool status = person_create (&person, "Cristiano Silva", "Rua dos Bobos", 25);

    if (status == true)
    {
        printf ("Person created successfully\n");

        // process
    }

    return 0;
}