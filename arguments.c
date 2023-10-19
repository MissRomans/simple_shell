#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int a = 0;

	while (av[a] != NULL)
	{
		printf("argv %d: %s\n", a, av[a]);
		a++;
	}

	return (0);
}
