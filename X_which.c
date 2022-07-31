#include "main.h"
#include <string.h>
/**
 *
 */
char *_which(char *filename, ...)
{
	int i;
	struct stat st;
	char *token = NULL, *duplicate = NULL, *aux = NULL, *aux2 = NULL, *xd = "lmao";
	char **saveMe = malloc(sizeof(char *) * 7);

	/* printf("Which????\n\n"); */
	if (saveMe == NULL)
		return("error");
	/* obtain current PATH */
	duplicate = _getenv("PATH");  /* buffer */
	/* tokenize */
	/* save paths into **saveMe */
	token = strtok(duplicate, ":");
	for (i = 0; token; i++)
	{
		saveMe[i] = strdup(token);
		token = strtok(NULL, ":");
	}
	saveMe[i] = NULL;
	/*for (i = 0; saveMe[i]; i++)
		printf("'Tis saveMe[%i]: %s\n", i, saveMe[i]); */
	/* concat */
	/* printf("Print me xd \n"); */
	for (i = 0; i < 7; i++)
	{
		aux = _str_concat(saveMe[i], "/");
		aux2 = _str_concat(aux, filename);
		/* printf("Let's see[%i]: %s\n", i, aux2); */
		if (stat(aux2, &st) == 0)
		{
			/* printf("entro?\n"); */
			break; /* sale del if cuando existe */
		}
		free(aux);
		free(aux2);
	}

	for (i = 0; i < 7; i++)
	{
		/* printf("\nis it me?\n"); */
		free(saveMe[i]);
	}
	/* printf("\nWHICH ENDS!\n"); */
	/* free(saveMe[i]), free(saveMe), free(duplicate); */
	return (aux2);
}
