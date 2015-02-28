#include <stdio.h>

// temparatures in F and C from lower to upper by step

#define LOWER   0
#define UPPER   300
#define STEP    10

main() {

    int f;

    for (f = LOWER; f <= UPPER; f = f + STEP) {

        printf("%3d %6.1f\n", f, (5.0 / 9.0) * (f - 32));

    }

}