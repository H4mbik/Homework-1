#include <stdio.h>

#define MAX 1000
#define LIMIT 80


int _getline(char line[], int lim);

int main(void) {
    int len;
    char line[MAX];

    while ((len = _getline(line, MAX)) > 0) {
        if (len > LIMIT)
            printf("%s", line);
    }

    return 0;
}

int _getline(char line[], int lim) {
    int i, c;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;

    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';

    return i;
}