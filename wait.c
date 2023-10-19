#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

/**
 * main - wait project
 * Return: Always 0
 */

int main(void)
{
	pid_t child_pid, eliminate_pid;
	int status;

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Fork error");
		return (1);
	}
	if (child_pid == 0)
	{
		printf("Child process is eliminating\n");
		exit(42);
	}
	else
	{
		wait(&status);
		printf("Parent process is waiting for child to eliminate...\n");
	}
	return (0);
}
