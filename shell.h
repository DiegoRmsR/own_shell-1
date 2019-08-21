#ifndef SH_H
#define SH_H
/*variables*/
#define BUF_SZ 1024
#define BUF_SZ_TOK 64
/*libraries*/
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/types.h>
/*functions*/
void _puts(char *str);
int _putchar(char c);
void shell_loop(void);
char *shell_read(void);
char **shell_token(char *line);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void _puts_grid(char **grid);
#endif
