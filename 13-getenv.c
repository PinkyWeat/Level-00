#include "main.h"
/**
 *
 */
char *_getenv(const char *name)
{
	int i = 0;
	char *duplicate, *token;

	/* loop through envps */
	for (; environ; i++)
	{
		duplicate = strdup(environ[i]);
		token = strtok(duplicate, "=");
		/* check for PATH */
		if (strcmp(duplicate, name) == 0)
		{
			token = strtok(NULL, "=");
			printf("token after strcmp + strtok: %s\n", token);
			return(token);
		}
		else
			free(duplicate);
	}
	printf("for is done\n");
	return (0);
}
