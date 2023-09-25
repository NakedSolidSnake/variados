#include <stdio.h>
#include <encapsulation-1.h>

int main (int argc, char *argv[])
{
    account_t account;
    double balance;

    account_init (&account);

    account_open (&account, 100.0);

    printf ("Account created\n");

    account_get_balance (&account, &balance);
    printf ("Current Balance: R$ %.2lf.\n", balance);

    account_withdraw (&account, 50.0);
    account_get_balance (&account, &balance);
    printf ("Current Balance: R$ %.2lf.\n", balance);

    account_deposit (&account, -100);
    printf ("Current Balance: R$ %.2lf.\n", balance);


    return 0;
}