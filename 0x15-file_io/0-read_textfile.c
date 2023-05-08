#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - program that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: pointer of the text file
 * @letters: the number of letters it
 * should read and print
 *
 * Return: the actual number of letters it could read and print,
 * if the file can not be opened or read, return 0,
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f_open, f_read, f_write;
	char f_buff;

	if (filename == NULL)
		return (0);

	f_buff = malloc(letters * sizeof(char));
	if (f_buff == NULL)
		return (0);

	f_open = open(filename, O_RDONLY);
	f_read = read(f_open, f_buff, letters);
	f_write = write(STDOUT_FILENO, f_buff, f_read);

	if (f_open == -1 || f_read == -1 || f_write == -1 || f_write != f_read)
	{
		free(f_buff);
		close(f_open);
		return (0);
	}

	free(f_buff);
	close(f_open);

	return (f_write);
}
