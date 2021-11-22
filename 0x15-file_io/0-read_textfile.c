#include "main.h"
/**
 * read_textfile - red and print filename to letters
 * @filename: file to evaluate
 * @letters: size to print
 * Return: (letters prints)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int ptr, i, j = letters, retw;

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL || filename == NULL)
		return (0);
	ptr = open(filename, O_RDONLY);
	if (ptr == -1)
		return (0);
	read(ptr, buf, letters);
	for (i = 0; buf[i] != '\0'; i++)
		;
	if (j > i)
		i++;
	retw = write(0, buf, i);
	if (retw == -1)
		return (0);
	close(ptr);
	free(buf);
	return (i);
}
