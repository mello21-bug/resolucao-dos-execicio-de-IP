# Problema:

Faça um programa que mostre os números pares entre 1 e 100.

---

# Resolução:

O problema não precisa de entrada. Algo que se torna crucial nas três estruturas de repetição é inicializar o contador i=2, pois isso já nos garante que o primeiro número a ser impresso seja par, e usar i+=2 assegura que os próximos números impressos também serão pares, porque assim você sempre pula para o próximo número par.


Mostraremos três formas de resolver esse exercício.
Primeiro vamos usar um loop `for` para imprimir todos os pares entre 1 e 100.

```c
#include <stdio.h>

int main() {
    int par;
    for (par = 2; par <= 100; par += 2) {
        printf("%d\n", par);
    }
    return 0;
}
```
Uma versão usando `while`: 

```c
#include <stdio.h>

int main() {
    int i = 2;

    while (i <= 100) {
        printf("%d\n", i);
        i += 2;
    }

    return 0;
}
```
E por fim, uma versão com `do-while`:

```c
#include <stdio.h>

int main() {
    int i = 2;

    do {
        printf("%d\n", i);
        i += 2;
    } while (i <= 100);

    return 0;
}


