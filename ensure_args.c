#include "monty.h"

/**
 * ensure_args: checks the number of args at the command line.
 * @argc: number of args at the command line.
 */
void ensure_args(int argc)
{
    if (argc == 2)
        return;

    fprintf(stderr, "USAGE: monty file\n");
    exit(EXIT_FAILURE);
}
