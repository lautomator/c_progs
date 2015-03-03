#include <stdio.h>

main() {

    // count lines from input from the terminal

    int c, newLine, i;
    newLine = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
            ++newLine;
    }

    printf("%d\n", newLine);

}
