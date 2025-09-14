#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    printf("before forks pid %d\n", getpid());

    fork();
    fork();
    fork();

    printf("after forks pid %d parent pid %d\n", getpid(), getppid());

    return 0;
}
