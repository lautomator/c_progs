#include <stdio.h>

#define IN    1
#define OUT   0

// count lines words and characters

main() {

    int c, newline, newword, newcount, state;

    state = OUT;
    newline = newword = newcount = 0;

    while ((c = getchar()) != EOF) {

        ++newcount;
        if (c == '\n')
            ++newline;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++newword;
        }
    }

    printf("wordcount: %d\ncharacters: %d\nlines: %d\n", 
        newword,
        newcount,
        newline
    );
}
