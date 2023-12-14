#include "monty.h"
/**
 * ensure_args: checks number of args at commandline.
 * @argc: number of args at cmnd line.
 */
void ensure_args(int argc)
{
	if (argc ==2)
		return;

	dprintf(2, "USAGE: monty file\n");
	exit(EXIT_FAILURE);

}
