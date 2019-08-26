#ifndef SH_H
#define SH_H
/*variables*/
#define BUF_SZ 1024
/*libraries*/
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/types.h>
/*functions*/
void _puts(char *str);
int _putchar(char c);
void puts_grid(char **grid);
void shell_loop(void);
char *shell_read(void);
char **shell_token(char *line, char *delim);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void _puts_grid(char **grid);
int shell_process(char **grid);
int shell_execute(char **grid);
char *_getenv(const char *name);
int shell_path(char *file, char **grid);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
#endif
