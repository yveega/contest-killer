#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv) {
    int x;
    printf("input of '%s', pid=%d > ", argv[0], getpid());
    fflush(stdout);
    if (scanf("%d", &x) != 1) {
        fprintf(stderr, "Error in process '%s', pid=%d\n", argv[0], getpid());
        return 1;
    }
    fflush(stdin);
    printf("return of '%s', pid=%d: %d\n", argv[0], getpid(), x);
    return 0;
}
