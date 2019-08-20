#ifndef SH_H
#define SH_H
/*variables*/
#define BUF_SZ 1024
/*libraries*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/types.h>
/*functions*/
void _puts(char *str);
int _putchar(char c);
void shell_loop(void);
char *shell_read(void);
#endif
