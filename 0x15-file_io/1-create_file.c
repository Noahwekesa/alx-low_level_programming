#include "main.h"

/**
 * create_file - program that creates a file
 * @filename: pointer of the text file
 * @text_content: pointer to a string to write inside a file
 *
 * Return: 1 on success, -1 on failure,
 * if the file already exists, truncate it
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 */
int create_file(const char *filename, char *text_content)
{

