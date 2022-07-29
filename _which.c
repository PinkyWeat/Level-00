#include "main.h"
#include <string.h>
/**
 *
 */
char *_which(char *filename, ...)
{
	int i;
	char *token = malloc(sizeof(char)), *duplicate = malloc(sizeof(char));
	char **saveMe = malloc(sizeof(char *));

	if (saveMe == NULL)
		return("error");
	printf("EMPIEZA WHICH: \n");
	/* obtain current PATH */
	duplicate = _getenv("PATH");  /* buffer */
	/* tokenize */
	printf("Work\n");

	token = strdup(duplicate);
	/* save paths into **saveMe */
	saveMe[0] = strtok(token, ":");
	printf("antes for: %s\n", saveMe[0]);
	for (i = 1; i < 7; i++)
	{
		if (token == NULL)
			break;
		else
		{
        		printf("WHICH: %s\n", token);
			token = strtok(NULL, ":");
			saveMe[i] = token;
			printf("After adding to saveMe[%i]: %s\n", i, saveMe[i]);
		}
	}
	/* concat */
	for (i = 0; i < 7; i++)
	{
		printf("Pre strcat saveMe[%i]: %s\n", i, saveMe[i]);
		saveMe[i] = strcat(saveMe[i], "/");
		printf("SaveMe[%i]: %s\n", i, saveMe[i]);
	}

	for (i = 7; i >= 0; i--)
	{
		free(saveMe[i]);
	}
	free(saveMe);
	return (token);
}
