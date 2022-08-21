#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

typedef struct state_t state_t;

typedef void (*func_t) (state_t *state);

void state_one (state_t *state);
void state_two (state_t *state);
void state_three (state_t *state);

struct state_t
{
    func_t func;
};

void state_init (state_t *state, func_t initial)
{
    state->func = initial;
}

void state_process (state_t *state)
{
    while (true)
    {
        state->func (state);
        sleep (1);
    }
}

int main (void)
{
    state_t state;

    state_init (&state, state_one);
    state_process (&state);
}

void state_one (state_t *state)
{
    printf ("State One\n");
    state->func = state_two;
}

void state_two (state_t *state)
{
    printf ("State Two\n");
    state->func = state_three;
}

void state_three (state_t *state)
{
    printf ("State Three\n");
    state->func = state_one;
}