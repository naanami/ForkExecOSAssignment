#include <stdio.h>
#include <unistd.h>

int main() {
    int pid1 = fork();

    if (pid1 == 0) {
        execl("/usr/bin/ls", "ls", NULL);
    } else {
        int pid2 = fork();
        if (pid2 == 0) {
            execl("/usr/bin/date", "date", NULL);
        } else {
            printf("parent process done\n");
        }
    }

    return 0;
}
