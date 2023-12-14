/**
 * malloc_fail: handles error due to malloc failure
 */
void malloc_fail(void)
{
	dprintf(2, "Error: malloc failed\n");
	free_args();
	exit(EXIT_FAILURE);
}
