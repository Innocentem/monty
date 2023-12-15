#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * main: entry point
 * @argc: number of cmd line args
 * @argv: ptr to string array of cmd line args
 *
 * Description: Your program logic goes here
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
    ensure_args(argc);
    initializer();
    _stream(argv[1]);
    size_t n = 0;
    while (getline(&arguments->line, &n, arguments->stream) != -1)
    {
        printf("%s", arguments->line);
    }

    return 0;
}
