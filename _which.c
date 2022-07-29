#include "main.h"
#include <string.h>
/**
 *
 */
char *_which(char *filename, ...)
{
	int i;
	struct stat st;
	char *token = NULL, *duplicate = NULL, *aux = NULL, *aux2 = NULL;
	char **saveMe = malloc(sizeof(char *) * 7);

	if (saveMe == NULL)
		return("error");
	printf("EMPIEZA WHICH: \n");
	/* obtain current PATH */
	duplicate = _getenv("PATH");  /* buffer */
	/* tokenize */
	printf("Work\n");
	/* save paths into **saveMe */
	token = strtok(duplicate, ":");
	for (i = 0; token; i++)
	{
       		printf("WHICH: %s.\n", token);
		saveMe[i] = strdup(token);
		token = strtok(NULL, ":");
		printf("After adding to saveMe[%i]: %s\n", i, saveMe[i]);
	}
	saveMe[i] = NULL;
	printf("Here\n");
	for (i = 0; saveMe[i]; i++)
		printf("\nA ver saveMe[%i]: %s\n", i, saveMe[i]);
	/* concat */
	for (i = 0; saveMe[i]; i++)
	{
		printf("Pre strcat saveMe[%i]: %s\n", i, saveMe[i]);
		aux = _str_concat(saveMe[i], "/");
		aux2 = _str_concat(aux, filename);
		printf("Aux: %s\n, aux2: %s\n", aux, aux2);
		if (stat(aux2, ) == 0)
		{
			printf("Holi\n");
			free(aux);
			return (aux2);
		}
		free(aux);
		free(aux2);
	}

	for (i = 0; saveMe[i]; i++)
	{
		free(saveMe[i]);
	}
	free(saveMe[i]), free(saveMe), free(duplicate);
	return (token);
}
