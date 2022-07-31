#include "main.h"
/**
 *
 */
int main(int argc, char **argv)
{
        size_t bufsize = 0;
        char *buffer = NULL, *buffer2 = NULL, *location[] = {"", "/usr", NULL}, *token = NULL;
        size_t character;
	int pid = 0, status;

	while (buffer2 != "no")
	{
		printf("#cisfun$ ");
        	character = getline(&buffer, &bufsize, stdin);
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
			/*printf("");i*/
			location[0] = _which(token); /* return of _which works */
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
