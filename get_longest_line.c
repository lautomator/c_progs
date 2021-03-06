#include <stdio.h>

// maximum line length
# define MAXLINE 1000

int getline(char line[], int maxline);

void copy(char to[], char from[]);

// print the longest line
main() {
    int len,
        max;
    char line[MAXLINE],
        longest[MAXLINE];

    max = 0;
    while ((len = getline(line, MAXLINE)) > 0)

        if (len > max) {
            max = len;
            copy(longest, line);
        }

    if (max > 0)
        printf("%s", longest);

    return 0;

    // getline
    int getline(char s[], int lim) {

        int c,
            i;

        for (i = 0; i < lim - 1 && (c = getchar()) != EOF
            && c != '\n'; ++i)
            s[i] = c;

        if (c == '\n') {

            s[i] = c;
            ++i;
        }
        s[i] = '\0';
        return i;
    }

    // copy
    void copy(char to[], char from[]) {

        int i;

        i = 0;
        while ((to[i] = from[i]) != '\0')
            ++i;
    }
}
