#include <stdio.h>

main() {
    // count characters

    double numChars;

    for (numChars = 0; getchar() != EOF; ++numChars)
        ;

    printf("%.0f\n", numChars);

}
