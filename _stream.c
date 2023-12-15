#include "monty.h"

void _stream(char *_name)
{
    fprintf(stderr, "Error: Can't open file %s\n", _name);
    free_args();
    exit(EXIT_FAILURE);
}

void stream_get(char *_name)
{
    FILE *file_stream;
    file_stream = fopen(_name, "r");
    if (file_stream == NULL)
        stream_fail(_name);

    arguments->stream = file_stream;
}
