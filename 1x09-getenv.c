#include <string.h>
#include <stdio.h>
#include <stdlib.h>
extern char **environ;
/**
 *
 */
char *_getenv(const char *name)
{
	int i = 0;
	char *duplicate, *token, *token2;

	/* loop through envps */
	for (; environ; i++)
	{
		printf("envp looks: %s\n", environ[i]);

		duplicate = strdup(environ[i]);
		printf("duplicate of envp: %s\n", duplicate);

		token = strtok(duplicate, "=");
		printf("token before if: %s\n", token);
		/* check for PATH */
		if (strcmp(duplicate, name) == 0)
		{
			token = strtok(NULL, "=");
			printf("token after strcmp + strtok: %s\n", token);
			return(token);
		}
		else
			continue;
	}
	printf("for is done\n");
	return (0);
}
