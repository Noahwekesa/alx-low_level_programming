#include "main.h"

/**
 * mainf - program that copies the content of a file to another file.
 * @argmc: the int num
 * @argmv: double pointer
 *
 * Return: the copy of the file,
 */
int mainf(int argmc, char **argmv)
{
	int f_from, f_to, filestatus;
	char f_buff[1024];

	if (argmc != 3)
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n"), exit(97);
	f_from = open(argmv[1], O_RDONLY);
	if (f_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argmv[1]);
		exit(98);
	}
	f_to = open(argmv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (f_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argmv[2]), exit(99);
	while ((filestatus = read(f_from, f_buff, 1024)) > 0)
	{
		if (filestatus == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argmv[1]);
			exit(98);
		}
		filestatus = write(f_to, f_buff, filestatus);
		if (filestatus == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argmv[2]);
			exit(99);
		}
	}
	if (filestatus == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argmv[1]);
		exit(98);
	}
	if (close(f_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_from), exit(100);
	if (close(f_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_to), exit(100);

	return (0);
}
