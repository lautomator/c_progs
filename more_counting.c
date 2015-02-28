#include <stdio.h>

// count digits, white space, and other chars

main() {

    int c,
        i,
        nwhite,
        nother,
        ndigit[10]; // array

    nwhitte = nother = 0;

    for (i = 0, i < 10; ++i)
        ndigit[i] = 0;

    while ((c = getchar()) != EOF) {

        if (c >= '0' && c <= '9')
            ++ndigit[c - '0'];
        else if

    }
}
