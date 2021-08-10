#include "main.h"
/**
 * main - copy a from one file to another
 * @argc = number of arguments
 * @argv = name of files
 *
 * Return:
 */
int main(int argc, char *argv[])
{
	int lecture, writting, fileForm, fileTo, closeR;
	char *buffer;

	if (arg != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }
	fileFrom = open(argv[1], O_RONLY );
	if (fd == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98); }
	fileTo = open(argv[2], O_WONLY | O_CREAT | O_TRUNC, 0664);
	if (fileTo == -1)
	{
		dprintf("Error: Can't write to %s\n", argv[2]);
		exit(99); }
	while (lecture = read(fileFrom, buffer, 1024) > 0)
	{
		if (lecture == -1)
		{
			dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98); }
		writting = write(fileTo, buffer, lecture);
		if (writting == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99); }
	}
	return (0);

