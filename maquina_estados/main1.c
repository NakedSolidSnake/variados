#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

typedef enum 
{
    state_one,
    state_two,
    state_three,
} states_t;

int main (void)
{
    states_t state = state_one;

    while (true)
    {
        switch (state)
        {
        case state_one:
            printf ("State One\n");
            state = state_two;
            break;

        case state_two:
            printf ("State Two\n");
            state = state_three;
            break;

        case state_three:
            printf ("State Three\n");
            state = state_one;
            break;
        
        default:
            break;
        }

        sleep (1);
    }
}