#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

int main(__attribute__((unused))int ac, char *av[])
{
	int len = strlen(*av), i;

	for (i = 0; i < len; i++)
		printf("Argv[%d] %s\n",i , av[i]);

	return (0);
}
