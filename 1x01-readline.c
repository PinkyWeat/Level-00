#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - writes $ n waits for user to enter cmd and prints it.
 */
int main(__attribute__((unused))int ac, char *av[])
{
	int len, i;

	printf("$ ");
	wait(NULL);
	len = getline(*av);

	for (i = 0; i < len; i++)
		printf("[%d] %s\n", i, av[i]);

	return (0);
}
