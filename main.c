#include "main.h"
/**
 *
 */
int main(int argc, char **argv)
{
        size_t bufsize = 32;
        char *buffer = (char *)malloc(bufsize * sizeof(char)), *buffer2, *location;
        size_t character;
	int pid;

        if (buffer == NULL)
        {
                perror("Error: ");
                exit(1);
        }
        character = getline(&buffer, &bufsize, stdin);
        /* dup cmd line + save only what was first written */
        buffer2 = strdup(buffer);
        buffer2 = strtok(buffer2, " ");
	/* creates child proc for execve */
	pid = fork();
	if (pid == -1)
		return (-1);
	if (pid == 0)
	{
		location = _which(buffer2); /* does the cmd exist? */
		printf("%s\n", location);
		/* lo que me devuelve which lo ejecuto */
	}
        /* gotPATH = _getenv("PATH"); */
        /* _which(buffer2); */
        /* _getenv("PATH"); */
        printf("Last thing: %s\n", buffer2);
	free(buffer);
        return (0);
}
