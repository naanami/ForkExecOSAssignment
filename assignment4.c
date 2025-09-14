#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    int pid = fork();

    if (pid == 0) {
        execl("/bin/grep", "grep", "main", "test.txt", NULL);
    } else {
        wait(NULL);
        printf("parent process completed\n");
    }

    return 0;
}
