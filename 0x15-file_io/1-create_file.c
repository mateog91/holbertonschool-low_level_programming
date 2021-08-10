#include "main.h"
/**
 * create_file - function that creates a file.
 * @filename: name of file to create
 * @text_content:  is a NULL terminated string to write to the file
 *
 * Description:
 * The created file must have those permissions: rw-------
 * If the file already exists, do not change the permissions.
 *
 * Return:
 * 1 on success
 * -1 on failure (file can not be created, file can not be written, write
 * “fails”, etc…)
 * if filename is NULL return -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, size, written;
	
	if (filename == NULL)
		return (-1);

	/* open file */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (-1);
	}
	for (size = 0; text_content[size] != '\0'; size++)
		;

	/* size file */
	written = write(fd, text_content, size);
	if (written == -1)
		return (-1);

	close(fd);
	return (1);
}
