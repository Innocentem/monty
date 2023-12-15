#include "monty.h"
#include <stdlib.h>

Arguments *arguments;

void initializer(void)
{
    arguments = malloc(sizeof(Arguments));
    if (arguments == NULL)
        malloc_fail();
    arguments->stream = NULL;
    arguments->line = NULL;
}
