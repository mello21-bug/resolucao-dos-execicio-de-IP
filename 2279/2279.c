#include <stdio.h>

int verifica_pre_suc(int n, int x) {
    if (n == 0) return 0; // caso base: acabou os dígitos
    int digito = n % 10;
    if (digito == x - 1 || digito == x + 1) return 1;
    return verifica_pre_suc(n / 10, x); // chama recursivamente para o restante
}

int main() {
    int n, x;
    scanf("%d %d", &n, &x);
    
    if (verifica_pre_suc(n, x))
        printf("sim\n");
    else
        printf("nao\n");
    
    return 0;
}
