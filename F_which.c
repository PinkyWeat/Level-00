#include "main.h"
#include <string.h>
/**
 *
 */
char *_which(char *filename, ...)
{
	int i, args = 0;
	struct stat st;
	char *token = NULL, *duplicate = NULL, *aux = NULL, *aux2 = NULL;
	char **saveMe; /*= malloc(sizeof(char *) * 7);i*/

	duplicate = _getenv("PATH"); /* obtain current path */
	args = repeatMe(duplicate, ':') + 2; /* num of sub paths + null */
	saveMe = malloc(args * sizeof(char *)); /* reserve space */
	if (saveMe == NULL)
		return ("error");
	token = strtok(duplicate, ":"); /* tokenize */
	for (i = 0; token; i++)
	{
		saveMe[i] = strdup(token);
		token = strtok(NULL, ":");
	}
	saveMe[i] = NULL; /* first pos + concat */
	for (i = 0; i < 7; i++)
	{
		aux = _str_concat(saveMe[i], "/");
		aux2 = _str_concat(aux, filename);
		if (stat(aux2, &st) == 0)
			break; /* sale del if cuando existe */
		free(aux);
		free(aux2);
	}
	/* only need to free now */
	for (i = 0; saveMe[i]; i++)
		free(saveMe[i]);
	/* free(saveMe[i]), free(saveMe), free(duplicate); */
	return (aux2);
}
