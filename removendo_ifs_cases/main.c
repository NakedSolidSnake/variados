#include <stdio.h>
#include <stdlib.h>

#define DOMINGO_STR "Domingo"
#define SEGUNDA_STR "Segunda"
#define TERCA_STR   "Terca"
#define QUARTA_STR  "Quarta"
#define QUINTA_STR  "Quinta"
#define SEXTA_STR   "Sexta"
#define SABADO_STR  "Sabado"

void dias_da_semana_if(void);
void dias_da_semana_switch(void);
void dias_da_semana_lookup(void);


typedef enum 
{
    domingo = 0,
    segunda,
    terca,
    quarta,
    quinta,
    sexta,
    sabado
} dias_da_semana;

int main(void)
{
    // dias_da_semana_if();
    // dias_da_semana_switch();
    dias_da_semana_lookup();
    return EXIT_SUCCESS;
}

void dias_da_semana_lookup(void)
{
    typedef struct 
    {
        dias_da_semana dia;
        char *str;
    } dia_struct;

    dia_struct dias [] = 
    {
        {.dia = domingo, .str = DOMINGO_STR},
        {.dia = segunda, .str = SEGUNDA_STR},
        {.dia = terca,   .str = TERCA_STR},
        {.dia = quarta,  .str = QUARTA_STR},
        {.dia = quinta,  .str = QUINTA_STR},
        {.dia = sexta,   .str = SEXTA_STR},
        {.dia = sabado,  .str = SABADO_STR},
    };

    int tamanho = sizeof(dias) / sizeof(dias[0]);

    for(int i = 0; i < tamanho; i++)
    {
        if(i == dias[i].dia)
        {
            printf("%s\n", dias[i].str);            
        }
    }
}

void dias_da_semana_switch(void)
{
    char *dia;

    for(int i = 0; i < 7; i++)
    {
        switch (i)
        {
        case domingo:
            dia = DOMINGO_STR;
            break;
        case segunda:
            dia = SEGUNDA_STR;
            break;
        case terca:
            dia = TERCA_STR;
            break;
        case quarta:
            dia = QUARTA_STR;
            break;
        case quinta:
            dia = QUINTA_STR;
            break;
        case sexta:
            dia = SEXTA_STR;
            break;
        case sabado:
            dia = SABADO_STR;
            break;        
        }  

        printf("%s\n", dia);
    }
}


void dias_da_semana_if(void)
{
    char *dia;
    for(int i = 0; i < 7; i++)
    {
        if(i == domingo)
            dia = DOMINGO_STR;

        else if(i == segunda)
            dia = SEGUNDA_STR;

        else if(i == terca)
            dia = QUARTA_STR;

        else if(i == quinta)
            dia = QUINTA_STR;

        else if(i == sexta)
            dia = SEXTA_STR;

        else if(i == sabado)
            dia = SABADO_STR;

        printf("%s\n", dia);
    }
}