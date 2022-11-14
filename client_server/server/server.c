#include <udp.h>
#include <string.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

void on_receive (char *buffer, size_t *size, void *data)
{
    printf ("%s", buffer);
}

void on_send (char *buffer, size_t *size, void *data)
{
    char *message = "Server says hello";
    strncpy (buffer, message, strlen (message));
    *size = strlen (message);
}

int main (int argc, char *argv[])
{
    udp_t server;
    char buffer [BUFFER_SIZE] = {0};

    udp_args_t args = 
    {
        .type = udp_type_server,
        .port = "1234",
        .buffer = buffer,
        .size = BUFFER_SIZE,
        .on_receive = on_receive,
        .on_send = on_send,        
    };

    udp_init (&server);
    udp_open (&server, &args);
    udp_run (&server);
    udp_close (&server);
}