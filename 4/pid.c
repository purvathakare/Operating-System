#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid;

    printf("Parent Process Started\n");
    printf("Parent PID: %d\n", getpid());

    pid = fork();
    if (pid == 0) {
        printf("Hello I'm child 1\n");
        printf("Child PID: %d Parent PID: %d\n", getpid(), getppid());
        return 0;
    }

    pid = fork();
    if (pid == 0) {
        printf("Hello I'm child 2\n");
        printf("Child PID: %d Parent PID: %d\n", getpid(), getppid());
        return 0;
    }

    pid = fork();
    if (pid == 0) {
        printf("Hello I'm child 3\n");
        printf("Child PID: %d Parent PID: %d\n", getpid(), getppid());
        return 0;
    }

    pid = fork();
    if (pid == 0) {
        printf("Hello I'm child 4\n");
        printf("Child PID: %d Parent PID: %d\n", getpid(), getppid());
        return 0;
    }

    return 0;
}
