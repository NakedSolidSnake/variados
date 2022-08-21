#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int compare_asc(const void *p1, const void *p2)
{
    return (*(int *)p1 > *(int *)p2);
}

static int compare_desc(const void *p1, const void *p2)
{
    return (*(int *)p1 < *(int *)p2);
}

static void print_array (int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf ("%d ", array[i]);
    }

    putchar ('\n');    
}

int main(int argc, char *argv[])
{    
    int array [10] = {9, 6, 7, 1, 2, 3, 0, 4, 8, 5};

    print_array (array, 10);

    qsort(array, 10, sizeof(int), compare_asc);

    print_array (array, 10);

    qsort(array, 10, sizeof(int), compare_desc);

    print_array (array, 10);

    exit(EXIT_SUCCESS);
}
