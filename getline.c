#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	size_t n = 10;
	char *buf = malloc(sizeof(char) * n);


	printf("Enter name");
	getline(&buf, &n, stdin);

	printf("Name is %sBuffer size is %ld\n", buf, n);

	free(buf);

	return 0;
}
