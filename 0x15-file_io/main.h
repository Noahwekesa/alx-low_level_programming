#ifndef FILE_IO_H
#define FILE_IO_H

#include <stddef.h>
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#define _POSIX_C_SOURCE  200809L
#define _GNU_SOURCE

int main(int argmc, char **argmv);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#endif
