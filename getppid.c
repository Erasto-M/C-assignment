#include <unistd.h>
#include <stdio.h>

int main()
{
    // Creating first child
    pid_t n1 = fork();

    if (n1 > 0)
    {
        // Parent process
        printf("parent\n");
        printf("%d %d \n", (int)n1, 0);
        printf("my id is %d \n", getpid());
        printf("my parentid is %d \n", getppid());
    }
    else if (n1 == 0)
    {
        // First child process
        // Creating second child
        pid_t n2 = fork();

        if (n2 > 0)
        {
            // First child process
            printf("First child\n");
            printf("%d %d \n", (int)n1, (int)n2);
            printf("my id is %d \n", getpid());
            printf("my parentid is %d \n", getppid());
        }
        else if (n2 == 0)
        {
            // Second child process
            printf("Second child\n");
            printf("%d %d \n", (int)n1, (int)n2);
            printf("my id is %d \n", getpid());
            printf("my parentid is %d \n", getppid());
        }
    }
    else
    {
        // Fork failed
        printf("Fork failed\n");
    }

    return 0;
}
