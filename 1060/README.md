#Problema:
---

Faça um programa que leia 6 valores. Estes valores serão somente negativos ou positivos (desconsidere os valores nulos). A seguir, mostre a quantidade de valores positivos digitados.

#Resolução:
---
De acordo com o exemplo dado no exercício, os valores dados podem ser reais. Sendo assim, utilizaremos o tipo `float` para eles. Também utilizaremos uma variável do tipo inteiro para contar quantos valores são positivos, que deve ser iniciada com 0. (É importante que sempre uma variável do tipo inteiro utilizada com a função de ser contadora seja inicializada, para não começar com “lixo de memória” e causar resultados incorretos).

Em seguida, usamos uma estrutura de repetição para ler os 6 valores informados pelo usuário. A cada leitura, verificamos se o número digitado é maior que zero. Caso seja, incrementamos o contador em 1. Ao final do processo, exibimos quantos valores positivos foram encontrados.

Para este exercício, mostraremos três formas possíveis de resolvê-lo, utilizando as três estruturas de repetição: `for`, `while` e `do-while`.

```c
#include <stdio.h>

int main() {
    float valor;
    int positivos = 0;
    int i;

    for(i = 0; i < 6; i++) {
        scanf("%f", &valor);

        if(valor > 0) {
            positivos++;
        }
    }

    printf("%d valores positivos\n", positivos);

    return 0;
}
```
Uma versão usando `while`:

```c
#include <stdio.h>

int main() {
    float valor;
    int positivos = 0;
    int i = 0;

    while (i < 6) {
        scanf("%f", &valor);

        if (valor > 0) {
            positivos++;
        }

        i++; 
    }

    printf("%d valores positivos\n", positivos);

    return 0;
}
```
E por fim, uma versão com `do-while`:

```c
#include <stdio.h>

int main() {
    float valor;
    int positivos = 0;
    int i = 0;

    do {
        scanf("%f", &valor);

        if (valor > 0) {
            positivos++;
        }

        i++; 
    } while (i < 6);

    printf("%d valores positivos\n", positivos);

    return 0;
}


