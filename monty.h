#ifndef _MONTY_H
#define _MONTY_H

#include <stdio.h>
#include <stdlib.h>

typedef struct stack_s
{
    int n;
    struct stack_s *prev;
    struct stack_s *next;
} stack_t;

typedef struct instruction_s
{
    char *opcode;
    void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

typedef struct args
{
    FILE *stream;
    char *line;
} Arguments;

/* Function declarations */
void free_args(void);
void stream_fail(char *_name);
void ensure_args(int argc);
void initializer(void);
void _stream(char *_name);
int getline(char **lineptr, size_t *n, FILE *stream);

/* Declare global variable */
extern Arguments *arguments;

/* Function to handle malloc failures */
void malloc_fail(void);

#endif /* _MONTY_H */
