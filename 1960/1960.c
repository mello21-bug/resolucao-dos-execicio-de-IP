#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    int valores[] = {900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char romanos[][3] = {"CM", "D", "CD", "C", "XC", "L", "XL","X", "IX", "V", "IV", "I"};

    char resultado[50] = "";  
    int i = 0;

    while (N > 0) {
        if (N >= valores[i]) {
            strcat(resultado, romanos[i]);
            N -= valores[i];
        } else {
            i++;
        }
    }

    printf("%s\n", resultado);
    return 0;
}
