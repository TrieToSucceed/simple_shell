#ifndef _STRINGS_H_
#define _STRINGS_H_

#include <stdlib.h>

/* strings1.c */
char *_strdup(char *str);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strtok(char *s, const char *delim);
unsigned int _strlen(char *s);

#endif /* _STRINGS_H_ */