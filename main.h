#ifndef MAIN_H
#define MAIN_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

extern char **environ;

int main(int argc, char **argv);

char *_getenv(const char *name);

#endif
