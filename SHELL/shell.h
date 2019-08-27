#ifndef SH_H
#define SH_H
/*variables*/
#define BUF_SZ 1024
extern char **environ;
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
int _putchar(char c);
void _puts(char *str);
char *shell_read(void);
void puts_grid(char **grid);
void shell_loop(char **env);
void _puts_grid(char **grid);
int shell_process(char **grid);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
char **shell_token(char *line, char *delim);
char *_getenv(const char *name);
int shell_path(char **grid);
int shell_status(char **grid);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
#endif
