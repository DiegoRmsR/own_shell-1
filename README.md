# Simple_shell
------------
## Table of Contents

## Description
Unix shell is a command-line interpreter or shell written by Ken Thompson in 1971 that provides a command line user interface for Unix-like operating systems.

## Mandatory Tasks
 *
 *
 *
 *

## Files
File | Description
--- | ---
`holberton.h` | header file

---
## Requirements
 * Simple_shell is designed to run on the Ubuntu 14.04 LTS Linux environment.
 * Must be compiled using the GNU v. gcc 4.8.4 compiler collection with flags-Wall, -Werror, -Wextra, and -pedantic.

## Installation
   - Clone this repository: `git clone "https://github.com/julgachancipa/simple_shell.git"`
   
## Compile
   - `gcc -Wall -Werror -Wextra -pedantic *.c -o hsh`
   
## Execute
   - Run the shell in interactive mode: `./hsh`
   - Or run the shell in non-interactive mode: `echo "pwd" | ./hsh`

## Example of Use
Run the executable in your terminal after compiling:
```
$ ./hsh
$ # This is our rendition of the shell
$ l
total 112K
drwxrwxr-x 3 vagrant vagrant 4.0K Aug 25 06:27 .
drwxrwxr-x 8 vagrant vagrant 4.0K Aug 22 21:05 ..
-rwxrwxr-x 1 vagrant vagrant 8.5K Aug 23 22:22 env
-rw-rw-r-- 1 vagrant vagrant  514 Aug 22 21:56 fork.o
-rw-rw-r-- 1 vagrant vagrant  226 Aug 23 20:10 _getenv.c
drwxrwxr-x 8 vagrant vagrant 4.0K Aug 25 06:27 .git
-rwxrwxr-x 1 vagrant vagrant  14K Aug 23 00:11 hsh
-rw-rw-r-- 1 vagrant vagrant  134 Aug 22 21:06 main.c
-rw-rw-r-- 1 vagrant vagrant  246 Aug 22 21:06 _putchar.c
-rw-rw-r-- 1 vagrant vagrant  218 Aug 22 21:06 _puts.c
-rw-rw-r-- 1 vagrant vagrant  145 Aug 22 21:06 _puts_grid.o
-rw-rw-r-- 1 vagrant vagrant   11 Aug 22 21:06 README.md
-rw-rw-r-- 1 vagrant vagrant  686 Aug 22 21:06 _realloc.c
-rw-rw-r-- 1 vagrant vagrant  247 Aug 24 02:13 shell_env.c
-rw-rw-r-- 1 vagrant vagrant  427 Aug 23 00:06 shell_execute.c
-rw-rw-r-- 1 vagrant vagrant  679 Aug 24 22:16 shell.h
-rw-rw-r-- 1 vagrant vagrant  319 Aug 23 00:07 shell_loop.c
-rw-rw-r-- 1 vagrant vagrant  109 Aug 25 06:26 shell_path.c
-rw-rw-r-- 1 vagrant vagrant  220 Aug 22 22:12 shell_read.c
-rw-rw-r-- 1 vagrant vagrant  580 Aug 22 21:06 shell_token.c
-rw-rw-r-- 1 vagrant vagrant  786 Aug 25 06:26 _strcat.c
-rw-rw-r-- 1 vagrant vagrant  298 Aug 25 01:12 _strcmp.c
-rw-rw-r-- 1 vagrant vagrant  199 Aug 25 01:18 _strlen.c
```
---

## Bugs
There are no known bugs.

## Authors
[Diego Ramos](https://github.com/DiegoRmsR) | [@Imdiegoramoss](https://twitter.com/Imdiegoramoss)

[Emma Gachancipa](https://github.com/julgachancipa) | [@julgachancipa](https://twitter.com/julgachancipa)
