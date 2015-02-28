#include <stdio.h>

#define IN    1
#define OUT   0

// count lines words and characters

main() {

    int c, newline, newword, newcount, state;

    state = OUT;
    newline = newword = newcount = 0;

    printf("\'!\' on a new line to get stats and exit\n");

    while ((c = getchar()) != EOF || (c = getchar()) != '!') {

        ++newcount;
        if (c == '\n')
            ++newline;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        if (c == '!') {
            break;
        }
        else if (state == OUT) {
            state = IN;
            ++newword;
        }
    }

    // Since '!' counts as a valid char, line, and word,
    // it is omitted from the count, hence: newcount - 1.
    printf("wordcount: %d\ncharacters: %d\nlines: %d\n",
        (newword - 1),
        (newcount - 1),
        (newline - 1));
}
