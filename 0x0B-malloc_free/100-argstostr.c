#include "main.h" 
#include <stdlib.h>
/**
 * argstostr - a function that concatenates all the arguments of your program.
 * @ac: int input
 * @av: double pointer array
 * Return: NULL if fails, or new string 
 */
char *argstostr(int ac, char **av)
{
    int i, k, s = 0, z = 0;
    char *str;

    if (ac == 0 || av == NULL)
            return (NULL);

    for (i = 0; i < ac; i++)
    {
        for (k = 0; av[i][k]; k++)
                z++;
    }
    z += ac;

    str = malloc(sizeof(char) * z + 1);
    if (str == NULL)
            return(NULL);
    for (i = 0; i < ac; i++)
    {
        for (k = 0; av[i][k]; k++)
        {
            str[s] = av[i][k];
            s++;
        }
        if (str[k] == '\0')
        {
            str[s++] = '\n';
        }
        }
        return (str);
}