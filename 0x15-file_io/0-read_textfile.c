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
	int ptr, reco;
	ssize_t i;

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL || filename == NULL)
		return (0);
	ptr = open(filename, O_RDONLY);
	if (ptr == -1)
		return (0);
	reco = read(ptr, buf, letters);
	if (reco == -1)
		return (0);
	i = write(STDOUT_FILENO, buf, reco);
	if (i == -1)
		return (0);
	close(ptr);
	free(buf);
	return (i);
}
