#include <udp.h>
#include <string.h>
#include <stdio.h>

#define BUFFER_SIZE     1024

int main (int argc, char *argv[])
{
    char buffer [BUFFER_SIZE] = {0};
    size_t size = BUFFER_SIZE;
    char *hello = "Hello World\n";

    udp_t client;
    udp_args_t args = 
    {
        .type = udp_type_client,
        .hostname = "localhost",
        .port = "1234"
    };

    udp_init (&client);
    udp_open (&client, &args);

    udp_send (&client, hello, strlen (hello));
    udp_receive (&client, buffer, &size);

    printf ("%s\n", buffer);

    udp_close (&client);

    return 0;
}