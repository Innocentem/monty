#include "monty.h"
/**
 * stream_fail: handles error when file read fails
 * @_name: file name
 */
void _stream(char *_name)
{
	dprintf(stderr, "Error: Can't open file %s\n", _name);
	free_args();
	exit(EXIT_FAILURE);
}
/**
 * stream_get: gets stream from which specified file is read.
 * @_name: name of file to open and set as stream.
 */
vid stream_get(char *_name)
{
	int fd;
	fd = open(_name, O_RDONLY);
	if (fd == -1)
		stream_fail(_name);
	arguments->stream =fdopen(fd, "r");
	if (arguments->stream == NULL)
	{
		close(fd);
		stream_fail(_name);
	}
}
