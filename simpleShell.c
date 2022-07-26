#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
 *
 */
int main(void)
{
	/* char *args = {" ", NULL}; */
	size_t characters;
	size_t bufsize = 32;
	char *buffer = malloc(bufsize * sizeof(char));

	printf("#cisfun$ ");
	/* gets line from stream */
	characters = getline(&buffer,&bufsize, stdin);
	/* ignore \n */
	printf("%zu\n", (characters - 1));
	printf("%s", buffer);

	free(buffer);
	return (0);
}
