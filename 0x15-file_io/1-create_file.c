#include "main.h"

/**
 * create_file - program that creates a file.
 * @filename: this is the pointer of the file name
 * @text_content:is a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure,
 * if the file already exists, truncate it
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 */
int create_file(const char *filename, char *text_content)
{
	int f_open, f_write, len_num = 0;
	
	if (filename == NULL)
		return (-1);
	
	if (text_content != NULL)
	{
		for (len_num = 0; text_content[len_num]; len_num++);
	}
	
	f_open = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (f_open == -1)
		return (-1);
	f_write = write(f_open, text_content, len_num);
	
	if (f_write == -1) 
	{
		close(f_open);
		return (-1);
	}

	close(f_open);

	return (1);
}
