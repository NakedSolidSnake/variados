#include <stdlib.h>
#include <stdio.h>

int main (int argc, char *argv[])
{

    char *port = getenv ("PORT");
    if (port != NULL)
    {
        printf ("Port: %s\n", port);
    }
    return 0;
}