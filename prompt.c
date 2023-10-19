#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	size_t len = 10;
	char *buff = NULL;

	buff = malloc(sizeof(char) *10);
	if (buff == NULL)
		return (1);
	while (1)
	{
		printf("$");
		getline(&buff, &len, stdin);
		printf("$: %s", buff);
		printf("Buffer size : %zu\n", len);
	}

	free(buff);

	return (0);
}
