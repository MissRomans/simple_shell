#include <stdio.h>
#include <unistd.h>

/**
 * main - execve project
 * Return: Always 0
 */

int main(void)
{
	char *argv[] = {"/bin/ls", "-1", NULL};
	char *envp[] = {NULL};

	if
	(execve("/bin/ls", argv, envp) == -1);
	 perror("execve");
	 return (1);

	 return (0);
}
