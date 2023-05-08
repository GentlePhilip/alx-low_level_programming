#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - it Reads text files and prints it to POSIX standard output.
 * @filename: A pointer to the name of the file it should create.
 * @letters: The function must read and as well print the number of letters.
 *
 *
 * Return: 0 if the function fails and which means the filename is NULL
 *         O/w - this also shows  the actual number of bytes the function can read and print at the same time.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}
