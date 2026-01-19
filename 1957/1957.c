#include <stdio.h>
#include <string.h>

int main() {
    int V;
    char hex[20];   
    int i = 0;

    scanf("%d", &V);

    while (V > 0) {
        int resto = V % 16;

        if (resto < 10) {
            hex[i] = resto + '0';
        } else{
            hex[i] = resto - 10 + 'A';
        }

        V /= 16;
        i++;
    }

    hex[i] = '\0'; 
    
    int inicio = 0, fim = i - 1;
    while (inicio < fim) {
        char temp = hex[inicio];
        hex[inicio] = hex[fim];
        hex[fim] = temp;
        inicio++;
        fim--;
    }

    printf("%s\n", hex);

    return 0;
}
