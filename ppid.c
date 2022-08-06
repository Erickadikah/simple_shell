#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int a = 5;
	int b = 3;
	pid_t ppid;

	int sum = a + b;

	printf("sum is %d\n", sum);

	ppid = getppid();
	printf("my ppid is %u\n", ppid);

	return 0;
}
