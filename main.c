#include <stdio.h>
#include <sdlib.h>
#include "monty.h"

/**
 * main: entry pt
 * @argc - no. of cmd line args
 * @argv - ptr to string array of cmd line args
 * Description: print alphabet using putchar in lowercase
 *
 * Return: 0 on success
 */
int main(argc, char **argv)
{
	ensure_args(argc);
	initializer();
	_stream(argv[1]);
	while (getline(arguments->line, &n, arguments->stream) != -1)
	{
		printf("%s", arguments->line);
	}
	
	return(0);
}
