#include <stdio.h>
#include <string.h>

int main() {
    char frase[1000];

    // Lê a frase inteira
    fgets(frase, sizeof(frase), stdin);

    // Percorre a string usando strlen
    for (int i = 0; i < strlen(frase); i++) {
        // Trabalha apenas com letras minúsculas
        if (frase[i] >= 'a' && frase[i] <= 'z') {
            // Alfabeto invertido
            frase[i] = 'z' - (frase[i] - 'a');
        }
        // Espaços permanecem espaços
        // Outros caracteres são ignorados
    }

    // Saída
    printf("%s", frase);

    return 0;
}
