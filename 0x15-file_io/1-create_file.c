#include "main.h"
/**
 * create_file - create new file
 * @filename: name of the file
 * @text_content: write into file
 * Return: 1 success -1 failure
 */
int create_file(const char *filename, char *text_content)
{
	int creat, i;

	creat = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (creat == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		write(creat, text_content, (i + 1));
	}

	close(creat);
	return (1);
}
