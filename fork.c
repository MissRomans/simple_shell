#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * main - fork project
 * @one: first function
 * @two: second function
 * Return: Always 0
 */

int main(void)
{
	pid_t my_pid;
	pid_t pid;

	printf("fork\n");
	pid = fork();
	if (pid == -1)
	{
		perror("Error:");
		return (1);
	}
	printf("fork\n");
	my_pid = getpid();
	printf("my pid is %u\n", my_pid);
	return (0);
}
