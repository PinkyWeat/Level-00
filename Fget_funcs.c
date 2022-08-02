#include "main.h"
/**
 *
 */
int repeatMe(char *str, char delim)
{
	int i, len = strlen(str), count = 0;

	for (i = 0; i <= len; i++)
	{
		if (str[i] == delim)
			count++;
		continue;
	}
	return (count);
}
/**
 * executeMe - takes a string and turns it to a **char to be executed.
 */
char **executeMe(char *buffer)
{
	char **str = NULL;
	char *ptr = strdup(buffer);
	int x = 0, cargs = 0;
	char *token = NULL, *tok = NULL;

	/*printf("buffer: %s\n", buffer);*/
	cargs = repeatMe(buffer, ' ') + 2; /* counts spaces + NULL */
	str = malloc(cargs * sizeof(char *)); /* allocate memory accordingly */
	token = strtok(ptr, " ");
	for (x = 0; token; x++)
	{
		str[x] = strdup(token);
		token = strtok(NULL, " ");
	}
	str[x] = NULL;
	if (repeatMe(str[0], '/') == 0)
	{
		tok = strdup(str[0]);
		free(str[0]);
		str[0] = _which(tok);
	}
	return (str);
}
/**
 *
 */
void printMe(char **print)
{
        int x = 0;

        for (x = 0; print[x]; x++)
        {
                printf("print[%i]: %s\n", x, print[x]);
        }
}
