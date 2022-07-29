#include "main.h"
/**
 *
 */
int main(int argc, char **argv)
{
        size_t bufsize = 0;
        char *buffer, *buffer2, *location, *token;
        size_t character;
	int pid;

        character = getline(&buffer, &bufsize, stdin);
        /* dup cmd line + save only what was first written */
        buffer2 = strdup(buffer);
        token = strtok(buffer2, " ");
	/* creates child proc for execve */
	pid = fork();
	if (pid == -1)
		return (-1);
	if (pid == 0)
	{
		location = _which(token); /* does the cmd exist? */
		printf("%s\n", location);
		free(buffer), free(buffer2), free(location);
		return (0);		
/* lo que me devuelve which lo ejecuto */
	}
        /* gotPATH = _getenv("PATH"); */
        /* _which(buffer2); */
        /* _getenv("PATH"); */
        printf("Last thing: %s\n", buffer2);
	free(buffer), free(buffer2);
        return (0);
}
