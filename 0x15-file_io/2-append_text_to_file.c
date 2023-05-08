#include "main.h"

/**
 * append_text_to_file - program that appends text at
 * the end of a file.
 * @filename: pointer to the name of the file
 * @text_content: terminated string to add to the end of the file
 *
 * Return: 1 on success and -1 on failure,
 * if filname is NULL return -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f_open, f_write, f_length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (f_length = 0; text_content[f_length]; f_length++);
	}

	f_open = open(filename, O_WRONLY | O_APPEND);
	f_write = write(f_open, text_content, f_length);

	if (f_open == -1 || f_write == -1)
		return (-1);

	close(f_open);

	return (1);
}
