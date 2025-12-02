# Problema

Leia um valor inteiro N que é a quantidade de casos de teste que vem a seguir. Cada caso de teste consiste de dois inteiros X e Y. Você deve apresentar a soma de todos os ímpares existentes entre X e Y.

> Problema completo: https://www.urionlinejudge.com.br/judge/pt/problems/view/1099

# Resolução

 Para resolver o exercício, é importante observar alguns pontos-chave. O valor inteiro `N` funciona como condição de parada, portanto podemos utilizar um laço `for`, usando `N` como limite de iterações. Outro aspecto essencial é o cálculo da soma dos números ímpares, que deve ser feito com atenção para considerar apenas os valores corretos durante o processo.

No exercício será utilizado 4 valores inteiros, `X` e `Y` que denota o intervalo, `N` o número de casos, `soma` assim como nome sugere a soma do intervalo de `X` e `Y` e `aux` que será explicado mais a frente:

```c
        int X, Y, N, soma, aux;
```

A lógica do exercício se inicia com a leitura do `N`, número de repetições, e a utilização dele para a construção do nosso `for`
```c
        scanf("%d", &N);

        for (int i = 0; i < N; i++) {

        }

```
A leitura de X e Y devem estar dentro do `for` para poder garantir que a cada loop o valor de ambos mude.
Não é tão explícito, mas o exercício espera que Y receba o maior valor na hora da leitura dos valores e para garantir isso temos que fazer a verificação usando um `if`:
```c
       
    for (int i = 0; i < N; i++) {
        
        scanf("%d %d", &X, &Y);

        if (X > Y) {
            aux = X;
            X = Y;
            Y = aux;
        }
    }

```
O `if` que verifica se `Y` é menor que `X` e irá fazer uma troca simples de variável utilizando uma variável auxiliar inteira chamada de `aux`.

Em seguida teremos que zerar a variável soma dentro do `for` para que cada loop ela seja resetada e com outro `for`, tendo o intervalo definido entre a diferença de `X` e `Y`, iremos fazer a soma dos números ímpares, lembrando que a característica de um número ímpar é: 2n + 1. O `if` se encarregará dessa verificação comparando o resto da divisão com 1.

```c
        for (int i = 0; i < N; i++) {
        
        scanf("%d %d", &X, &Y);

        if (X > Y) {
            aux = X;
            X = Y;
            Y = aux;
        }

        soma = 0;

        for (X+=1; X < Y; X++) {
            if (X % 2 == 1) {
                soma = soma + X;
            }
        }

        printf("%d\n", soma);
    }

```