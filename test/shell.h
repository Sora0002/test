#ifndef SHELL_H
#define SHELL_H
#include <sys/wait.h>
#include <sys/stat.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
/* buffers size */
#define buf_size 1024
extern char **environ;

void displayP(void);
char *_strdup(const char *str);
int _strlen(char *str);
void exeP(char *c);
char *Reader(void);
int mergeF(char **argv);
char **tokn(char *line);
int run_func(char **c, char **argv);
int _strcmp(const char *str1, const char *str2);
#endif