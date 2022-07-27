#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *
 */
int main(int argc, char **argv, char **envp)
{
	int i = 0;
	char *duplicate, *token, *token2, *comp = "PATH";

	/* loop through envps */
	for (; envp[i]; i++)
	{
		printf("envp looks: %s\n", envp[i]);

		duplicate = strdup(envp[i]);
		printf("duplicate of envp: %s\n", duplicate);

		token = strtok(duplicate, "=");
		printf("token before if: %s\n", token);
		/* check for PATH */
		if (strcmp(duplicate, comp) == 0)
		{
			token = strtok(NULL, "=");
			printf("token after strcmp + strtok: %s\n", token);
			break;
		}
		else
			continue;
	}
	printf("for is done\n");
	return (0);
}
