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
	(void) argv;
	if (argc !=2)){
		dprintf(2, "USAGE: monty file\n");
		exit(EXIT_FAILURE);

	}
	return(0);
}
