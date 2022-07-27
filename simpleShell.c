#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - interactive simple shell.
 * Return: return 0 on success, -1 error.
 */
int main(void)
{
	char *args[] = {" ", NULL};
	size_t characters;
	size_t bufsize = 32;
	char *buffer = malloc(bufsize * sizeof(char));

	printf("#cisfun$ ");
	/* gets line from stream */
	characters = getline(&buffer,&bufsize, stdin);
	/* ignore \n  with -1 */
	/* printf("%zu\n", (characters - 1)); prints n of char printed */
	/* printf("%s", buffer); prints what was written in cmd line */
	buffer = strtok(buffer, "\n"); /* uses \n to cut */
	args[0] = buffer; /* route */
	if (execve(args[0], args, NULL) == -1)
	{
		perror("Error: ");
		return (-1);
	}

	free(buffer);
	return (0);
}
