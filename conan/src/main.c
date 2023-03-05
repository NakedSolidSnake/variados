/*
 * Copyright (c) 2018 the CivetWeb developers
 * Revisited version: Copyright (c) 2022 the CivetWeb developers
 * MIT License
 */

/* Simple demo of a REST callback. */
#include <unistd.h>

#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>

#include <civetweb.h>

#define PORT "8089"
#define HOST_INFO "http://localhost:8089"

int handler_index (struct mg_connection *conn, void *data)
{
    char path [1024] = {0};

    const struct mg_request_info *ri = mg_get_request_info (conn);

    const char *root = mg_get_option (mg_get_context (conn), "document_root");

    strncpy (path, root, sizeof (path));

    if (strcmp (ri->local_uri, "/") == 0)
        strncat (path, "/index.html", sizeof (path) - strlen (root));

    else 
        strncat (path, ri->local_uri, sizeof (path) - strlen (root));

    mg_send_file (conn, path);

    return 200;
}

static int log_message(const struct mg_connection *conn, const char *message)
{
	puts(message);
	return 1;
}


int main(int argc, char *argv[])
{
	int status = EXIT_FAILURE;
	const char *options[] = 
	{
		"listening_ports",
	    PORT,
		"request_timeout_ms",
		"10000",
		"error_log_file",
		"error.log",
		"document_root",
		"./assets",
		0
	};

	struct mg_callbacks callbacks;
	struct mg_context *context;

	/* Init libcivetweb. */
	mg_init_library(0);

	/* Callback will print error messages to console */
	memset(&callbacks, 0, sizeof(callbacks));
	callbacks.log_message = log_message;

	/* Start CivetWeb web server */
	context = mg_start(&callbacks, 0, options);

	/* Check return value: */
	if (context != NULL)
	{
		mg_set_request_handler(context, "/", handler_index, 0);

		/* Show some info */
		printf("Start example: %s%s\n", HOST_INFO, "/");

		/* Wait until the server should be closed */
		while (true)
			usleep(1);

		/* Stop the server */
		mg_stop(context);

		status = EXIT_SUCCESS;
	}

	return status;
}
