#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <stdlib.h>
/**
 *
 */
int main(void)
{
	int counter;
	char *argv[] = {"/bin/ls", "/usr/", NULL};

	for (counter = 0; counter < 5; counter++)
	{
		/* only childs */
		if (fork() == 0)
		{
			if (execve(argv[0], argv, NULL) == -1)
				perror("Error: ");
			return(0);
		}
	}
	/* only father */
	for (counter = 0; counter < 5; counter++)
	{
		wait(NULL);
	}
}
