#ifndef _SHELL_H_
#define _SHELL_H_

#include <dirent.h>
#include <errno.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/resource.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

#include "strings.h"
#include "linklists.h"

#define SPACE " "
#define PS1 "#cisfun$ "

/* shellhelpers1.c */
void displayprompt(void);
char *getcommand(void);
char **make_arr_str(char *s, const char *delim);
int action(char **cv);

#endif /* _SHELL_H_ */
