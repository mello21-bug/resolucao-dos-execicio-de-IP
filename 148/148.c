#include <stdio.h>
#include <string.h>

int contaBuracos(char texto[]) {
    int buracos[26] = {0};

    buracos['A' - 'A'] = 1;
    buracos['D' - 'A'] = 1;
    buracos['O' - 'A'] = 1;
    buracos['P' - 'A'] = 1;
    buracos['Q' - 'A'] = 1; 
    buracos['R' - 'A'] = 1;
    buracos['B' - 'A'] = 2;

    int total = 0;
    int tam = strlen(texto);

    for (int i = 0; i < tam; i++) {
        total += buracos[texto[i] - 'A'];
    }

    return total;
}

int main() {
    int T;
    scanf("%d", &T);

    char texto[101];

    while (T--) {
        scanf("%s", texto);
        printf("%d\n", contaBuracos(texto));
    }

    return 0;
}
