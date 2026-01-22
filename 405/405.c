#include <stdio.h>

int ContaDigitosPares(int n) {
    if (n == 0)
        return 0;
    
    int digito = n % 10;
    if (digito % 2 == 0)
        return 1 + ContaDigitosPares(n / 10);
    else
        return ContaDigitosPares(n / 10);
}

int main() {
    int numero;
    scanf("%d", &numero);

    // Caso o número seja 0, ele tem 1 dígito par (o próprio 0)
    if (numero == 0)
        printf("1\n");
    else
        printf("%d\n", ContaDigitosPares(numero));

    return 0;
}
