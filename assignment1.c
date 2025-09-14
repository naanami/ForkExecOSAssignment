#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    int pid = fork();

    if (pid == 0) {
        execl("/usr/bin/ls", "ls", NULL);
    } else {
        wait(NULL);
        printf("parent process done\n");
    }

    return 0;
}
