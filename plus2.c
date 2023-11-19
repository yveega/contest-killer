#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv) {
    int x;
    if (scanf("%d", &x) != 1) {
        printf("'%s', pid=%d: incorrect input\n", argv[0], getpid());
        return 1;
    }
    fflush(stdin);
    printf("%d\n", x + 2);
    fflush(stdout);
    return 0;
}