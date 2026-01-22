#include <stdio.h>

void descriptografar(char *s, int pos, int pi) {
    if (s[pos] == '\0') {
        return;
    }

    if (s[pos] == '*') {
        printf("(");
        printf("%d", pi);
        descriptografar(s, pos + 1, pi + 1);
        printf(")");
    } else { // '-'
        printf("%d", pi);
        descriptografar(s, pos + 1, pi + 1);
    }
}

int main() {
    char s[101];
    scanf("%s", s);

    descriptografar(s, 0, 1);

    printf("\n");
    return 0;
}
