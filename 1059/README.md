# Problema:

Faça um programa que mostre os números pares entre 1 e 100.

---

# Resolução:

O problema não precisa de entrada.  
Vamos usar um loop `for` para imprimir todos os pares entre 1 e 100.

```c
#include <stdio.h>

int main() {
    int par;
    for (par = 2; par <= 100; par += 2) {
        printf("%d\n", par);
    }
    return 0;
}

