#include <stdio.h>

main() {
    // count characters

    double numChars;
    numChars = 0;

    // stop at 30
    for (numChars = 0; getchar() != EOF && numChars <= 30; ++numChars)

        printf("%.0f\n", numChars);

}
