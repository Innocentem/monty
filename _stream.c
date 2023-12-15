#include "monty.h"

/**
 * stream_fail: handles error when file read fails
 * @_name: file name
 */
void _stream(char *_name)
{
    fprintf(stderr, "Error: Can't open file %s\n", _name);
    free_args();
    exit(EXIT_FAILURE);
}

/**
 * stream_get: gets stream from which specified file is read.
 * @_name: name of file to open and set as stream.
 */
void stream_get(char *_name)
{
    FILE *file_stream;
    file_stream = fopen(_name, "r");
    if (file_stream == NULL)
        stream_fail(_name);

    arguments->stream = file_stream;
}
