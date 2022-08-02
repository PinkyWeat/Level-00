#include "main.h"
/**
 *
 */
int main(int argc, char **argv)
{
        size_t bufsize = 0;
        char *buffer = NULL, *buffer2 = NULL, **location = NULL, *token = NULL;
        size_t character;
	int pid = 0, status;

	while (1)
	{
		printf("#cisfun$ ");
        	character = getline(&buffer, &bufsize, stdin);
		if (character == -1)
		{
			putchar(10);
			exit(98);
		}
        	/* dup cmd line + save only what was first written */
		buffer2 = strdup(buffer);
		token = strtok(buffer2, "\n");
		/* creates child proc for execve */
		/* printf("HERE I AM: %s.\n", token);*/
		pid = fork();
		if (pid == -1)
			return (-1);
		/* printf("here\n");*/
		if (pid == 0)
		{
			location = executeMe(buffer2);
			/*loc = location[0];
			location[0] = _which(loc); return of _which works */
			
			/* free(buffer), free(buffer2), free(location); */
			if (execve(location[0], location, NULL) == -1)
				perror("Error: "); /* logrado aca ejecuta y se termina */
		}
		wait(&status);
		/* printf("'Tis me: %s\n", buffer2); */
		/* free(buffer), free(buffer2); */
	}
	return (0); 
}
