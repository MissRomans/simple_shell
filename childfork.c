#include <stdio.h>
#include <unistd.h>

/**
 * main - return 0 to the child
 * Return: Always 0
 */

int main(void)
{
	pid_t pid;

	pid = fork();
	if (pid == -1)
	{
		perror("Error:");
		return (1);
	}
	if (pid == 0)
	{
		printf("Child process: PID = %d\n", getpid());
	}
	else
	{
		printf("Parent process: Child's PID = %d\n", pid);
	}
	return (0);
}
