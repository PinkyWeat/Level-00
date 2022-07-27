#include <stdio.h>
/**
 * main - list all envs.
 * Return: 0 on Success.
 */
int main(int argc, char **argv, char **envp)
{
	int i = 0;

	for (; envp[i]; i++)
	{
		printf("%s\n", envp[i]);
	}
	return (0);
}
