#include <stdlib.h>
#include "main.h"
/**
 * @brief: function that splits a string into words. 
 * count_word - function returns a pointer to an array of strings (words)
 * @s: string to evaluate
 *
 * Return: number of words
 * 
 * **strtow - splits a string into words
 * @str: string to split
 * 
 * Return: pointer to an array of strings (Success) or or NULL (Error)
 */
int count_word(char *s) 
{ 
    int flag, z, x;

    flag = 0; 
    x = 0;

    for (z = 0; s[z] != '\0'; z++) { 
        if (s[z] == ' ') 
            flag = 0; 
        else if (flag == 0) { 
            flag = 1; 
            x++; 
        }                 }

    return (x); 
}
/** **strtow **/
char **strtow(char *str) 
{ 
    char **matrix, *tmp; 
    int i, k = 0, len = 0, words, c = 0, start, end; 

    while (*(str + len)) 
        len++; 
    words = count_word(str); 
    if (words == 0) 
        return (NULL); 

    matrix = (char**) malloc(sizeof(char*) * (words + 1)); 
    if (matrix == NULL) 
        return (NULL); 

    for (i = 0; i <= len; i++) { 
        if (str[i] == ' ' || str[i] == '\0') { 
            if (c) { 
                end = i; 
                tmp = (char*) malloc(sizeof(char) * (c + 1));  
                if (tmp == NULL)  
                    return (NULL);  

                while (start < end)  
                    *tmp++ = str[start++];  

                *tmp = '\0';  

                matrix[k] = tmp - c;  

                k++;  

                c = 0;  

            }  

        } else if (c++ == 0) {  
            start = i;  

        }  

    }  

    matrix[k] = NULL;  

    return (matrix);  
}