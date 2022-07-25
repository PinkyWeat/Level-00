#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
	pid_t creature = fork();

	if (creature == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}

	if (creature == 0)
	{
		printf("Printed the child process: %d\n", getpid());
		exit(EXIT_SUCCESS);
	}

	else
	{
		printf("Printed the parent process: %d\n", getpid());
		wait(NULL);
	}
	exit(EXIT_SUCCESS);
}
