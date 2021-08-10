#include "main.h"
/**
 * main - copy a from one file to another
 * @argc: number of arguments
 * @argv: array of pointers with name of files
 *
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int lecture, writting, fileFrom, fileTo, closeFF, closeFT;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }
	fileFrom = open(argv[1], O_RDONLY);
	if (fileFrom == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98); }
	fileTo = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fileTo == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99); }
	while ((lecture = read(fileFrom, buffer, 1024)) > 0)
	{
		writting = write(fileTo, buffer, lecture);
		if (writting == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99); } }
	if (lecture == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98); }
	closeFF = close(fileFrom);
	if (closeFF == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileFrom);
		exit(100); }
	closeFT = close(fileTo);
	if (closeFT == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileTo);
		exit(100); }
	return (0);
}
