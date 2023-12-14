#include "monty.h"
/**
 * initializer: initialises ptr to argss struct
 */
void initializer()
{
	arguments = malloc(sizeof(argt));
	if (arguments == NULL)
		malloc_fail();
	arguments->stream = NULL;
	arguments->line = NULL;
}
