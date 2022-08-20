#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "person.h"

int main (int argc, char *argv[])
{
    person_t *person = person_create ("Cristiano", "Rua dos Bobos");
   
    printf ("%s\n", person_get_name (person));
    
    return EXIT_SUCCESS;
}