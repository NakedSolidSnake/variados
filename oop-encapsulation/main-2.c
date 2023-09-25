#include <stdio.h>
#include <encapsulation-2.h>

int main (int argc, char *argv[])
{
    double balance;


    account_t *account = account_open (100.0);

    printf ("Account created\n");

    account_get_balance (account, &balance);
    printf ("Current Balance: R$ %.2lf.\n", balance);

    account_withdraw (account, 50.0);
    account_get_balance (account, &balance);
    printf ("Current Balance: R$ %.2lf.\n", balance);

    account_deposit (account, -100);
    printf ("Current Balance: R$ %.2lf.\n", balance);
    
    account_close (account);

    return 0;
}