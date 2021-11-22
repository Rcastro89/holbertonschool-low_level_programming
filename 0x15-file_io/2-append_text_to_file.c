#include "main.h"
/**
 * append_text_to_file - add text to end file
 * @filename: name of the file
 * @text_content: write into file
 * Return: 1 success -1 failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int add, i;

	add = open(filename, O_WRONLY | O_APPEND);
	if (add == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		write(add, text_content, (i + 1));
	}
	close(add);
	return (1);
}
