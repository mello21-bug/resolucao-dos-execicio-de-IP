#include <stdio.h>

void inverteSequencia() {
    int n;
    scanf("%d", &n);

    if (n == 0)  // Caso base: fim da sequência
        return;

    inverteSequencia();  // Chamada recursiva antes do print
    printf("%d\n", n);  // Imprime após voltar da recursão
}

int main() {
    inverteSequencia();
    return 0;
}
