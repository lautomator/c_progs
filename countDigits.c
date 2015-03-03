#include <stdio.h>

// pipe in any text document to
// count digits, white space, etc...

main() {

    int c,
        i,
        nonwhite,
        other,
        ndigit[10]; // this is our array

    nonwhite = other = 0;

    for (i = 0; i < 10; i += 1) {

        ndigit[i] = 0;
    }

    while ((c = getchar()) != EOF) {

        if (c >= '0' && c <= '9')
            ++ndigit[c-'0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nonwhite;
        else
            ++other;
    }

    printf("digits =");
    for (i = 0; i < 10; i += 1) {

        printf(" %d", ndigit[i]);
    }

    printf(", white space = %d, other = %d\n", nonwhite, other);

}