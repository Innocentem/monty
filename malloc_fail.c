#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

void malloc_fail(void)
{
    fprintf(stderr, "Error: malloc failed\n");
    free_args();
    exit(EXIT_FAILURE);
}
