#include <stdio.h>
#include <unistd.h>

int main() {
    int pid = fork();

    if (pid == 0) {
        execl("/bin/echo", "echo", "hello from the child process", NULL);
    } else {
        wait(NULL);
        printf("parent process done\n");
    }

    return 0;
}
