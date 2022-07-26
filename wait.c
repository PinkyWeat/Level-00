#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - fork & wait example
 *
 * Return: Always 0.
 */
int main(void)
{
    pid_t child_pid;
    int status;

    child_pid = fork();
    if (child_pid == -1)
    {
        perror("Error:");
        return (1);
    }
    if (child_pid == 0)
    {
        printf("Wait for me, wait for me\n");
        sleep(3);
    }
    else
    {
	printf("Before status: %d\n", status);
	printf("Before status: %d\n", status);
        wait(&status);
	printf("After status: %d\n", status);i
        printf("Oh, it's all better now\n");
    }
    return (0);
}
