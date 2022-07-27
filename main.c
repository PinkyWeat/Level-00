#include "main.h"
/**
 *
 */
int main(int argc, char **argv)
{
	size_t bufsize = 32;
	char *buffer = (char *)malloc(bufsize * sizeof(char)), *buffer2; 	
	size_t character;

	if (buffer == NULL)
	{
		perror("Error: ");
		exit(1);
	}
	character = getline(&buffer, &bufsize, stdin);

	/* dup cmd line + save only what was first written */
	buffer2 = strdup(buffer);
	buffer2 = strtok(buffer2, " ");
	/* gotPATH = _getenv("PATH"); */
	/* _which(buffer2); */
	_getenv("PATH");
	printf("Last thing: %s\n", buffer2);
	return (0);
}
