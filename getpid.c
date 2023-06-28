#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>

int main()
{
    // Creating first child
    pid_t n1 = fork();

    // Creating second child. First child
    // also executes this line and creates
    // grandchild.
    pid_t n2 = fork();

    if (n1 > 0 && n2 > 0)
    {
        wait(NULL); // Wait for the first child to complete
        printf("parent\n");
        printf("%d %d \n", (int)n1, (int)n2);
        printf("my id is %d \n", getpid());
    }
    else if (n1 == 0 && n2 > 0)
    {
        printf("First child\n");
        printf("%d %d \n", (int)n1, (int)n2);
        printf("my id is %d \n", getpid());
    }
    else if (n1 > 0 && n2 == 0)
    {
        wait(NULL); // Wait for the second child to complete
        printf("Second child\n");
        printf("%d %d \n", (int)n1, (int)n2);
        printf("my id is %d \n", getpid());
    }
    else
    {
        printf("third child\n");
        printf("%d %d \n", (int)n1, (int)n2);
        printf("my id is %d \n", getpid());
    }
    return 0;
}
