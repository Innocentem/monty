#include "monty.h"

#define UNUSED(x) (void)(x)

int main(int argc, char **argv)
{
    size_t n;
    UNUSED(argc);
    ensure_args(argc);
    initializer();
    _stream(argv[1]);
    while (getline(&arguments->line, &n, arguments->stream) != -1)
    {
        printf("%s", arguments->line);
    }

    return 0;
}
