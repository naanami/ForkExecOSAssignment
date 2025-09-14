#include <stdio.h>
#include <unistd.h>

int main() {
    int pid1 = fork();

    if (pid1 == 0) {
        execl("/usr/bin/ls", "ls", NULL);
    } else {
        wait(NULL);
        int pid2 = fork();
        if (pid2 == 0) {
            execl("/usr/bin/date", "date", NULL);
        } else {
            wait(NULL);
            printf("parent process done\n");
        }
    }

    return 0;
}
