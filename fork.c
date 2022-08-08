#include <stdio.h>
#include <unistd.h>

int main(void)
{
        pid_t pid;

        printf("before fork iwas one\n");

        fork();

        if(pid == -1)
        {
                perror("unseccessful\n");
                return 1;
        }

        printf("after fork i became two\n");

        return 0;
}

