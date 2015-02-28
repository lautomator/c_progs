#include <stdio.h>

main() {

    // copy input to output

    printf("(! to exit)\n");

    int c;

    c = getchar();

    while (c != EOF && c != '!') {

        putchar(c);
        c = getchar();
    }

}
