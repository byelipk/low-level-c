#include <stdio.h>

/* This is a comment. */
int main(int argc, char *argv[]) {
    int distance = 100;

    // this is also a comment
    printf("You are %x miles away.\n", distance);
    printf("You passed in %d arguments.\n", argc);

    for (int i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i+1, argv[i]);
    }

    return 0;
}
