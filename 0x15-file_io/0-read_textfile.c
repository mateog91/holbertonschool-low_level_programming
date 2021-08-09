#include "main.h"
/**
 * read_textfile - function that prints the text from a file
 * @filename: Name of the file to print
 * @letters: Letters to print from the file
 *
 * Return: Number of letters printed if success, 0 if failed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, lecture, writting;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	lecture = read(fd, buffer, letters);
	if (lecture == -1)
	{
		free(buffer);
		return (0);
	}
	writting = write(STDOUT_FILENO, buffer, lecture);
	if (writting == -1)
	{
		free(buffer);
		return (0);
	}

	/*printf("lecture is %i writting is %i\n", lecture, writting);*/
	close(fd);
	free(buffer);

	return (writting);
}
