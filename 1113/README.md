# Problema:

Leia uma quantidade indeterminada de duplas de valores inteiros X e Y. Escreva para cada X e Y uma mensagem que indique se estes valores foram digitados em ordem crescente ou decrescente.

> Problema completo: https://www.urionlinejudge.com.br/judge/pt/problems/view/1113
---

# Resolução:

O problema pede a utilização de 2 valores inteiros *X* e *Y*:

```c
        float X, Y;
```

O exercício pede vários casos de teste sendo cada um deles divididos em valores para *X* e *Y*, para fazer esse tipo de exercício é recomendado usar um `while` em conjunto à um `scanf`. Temos que iniciar lendo as variáveis *X* e *Y* utilizando o `scanf`, isso se dá pela necessidade de iniciar o `while`. Como o exercício pede para ser vários casos de teste, iremos ao fim do loop ler novas entradas:

```c
        scanf("%d %d", &X, &Y);
        while(X!=Y){
            if(X>Y){
                printf("Decrescente\n");
            }
            else if(X<Y){
                printf("Crescente\n");
            }
            scanf("%d %d", &X, &Y);
        }
```
O loop será encerrado quando as duas entradas forem iguais.