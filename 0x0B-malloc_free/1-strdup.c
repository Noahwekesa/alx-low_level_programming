#include <stdio.h> 
#include <stdlib.h> 
#include "main.h"

/**
 * _strdup - function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
 * @str: char
 * Return: NULL if str = NULL 
 */
char *_strdup(char *str)
{
    char *nnn;
    int i, k = 0;
    if (str == NULL)
    return (NULL);
    i = 0;
    while (str[i] != '\0')
        i++;
    nnn = malloc(sizeof(char) * (i+1));
    if (nnn == NULL)
    return (NULL);
    for (k = 0; str[k]; k++)
    nnn[k] = str[k]; 
    return (nnn);
}