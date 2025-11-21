# Problema:

Leia 5 valores Inteiros. A seguir mostre quantos valores digitados foram pares, quantos valores digitados foram ímpares, quantos valores digitados foram positivos e quantos valores digitados foram negativos.

> Problema completo: https://www.urionlinejudge.com.br/judge/pt/problems/view/1066
---

# Resolução:

Uma forma de resolver o problema é utilizar 4 contadores referentes a cada classificação e, a cada número par, impar, positivo ou negativo, incrementar o respectivo contador desta categoria. Como sabemos a condição de término da leitura, iremos utilizar a estrutura de repetição `for`, para ler os 5 valores.

Para representar estes valores em nosso programa, fazemos:

```c
        int contPares = 0;
        int contImpares = 0;
        int contPositivos = 0;
        int contNegativos = 0;
        int valor;

```

Ao declarar uma variável, uma posição da memória será escolhida para tal e esta posição pode conter um valor desconhecido(lixo) já utilizado por outra aplicação. Por isso, os contadores de pares, impares, positivos e negativos acima precisam ser iniciados com zero, pois serão incrementados mais a frente. Caso não sejam inicializados, essas variáveis terão um valor aleatório e provavelmente irão levar a um resultado errado.

Para ler a entrada, usa-se scanf dentro da estrutura de repetição `for`.

```c
        int i ; // controlador da estrutura de repetição 
        for( i = 0; i < 5; i++){
            scanf("%d", &valor);
```

Em seguida, verifica-se se o número em questão é par, por meio da estrutura `if-else`: caso seja par, ou seja, o resto da divisão do número por 2 é 0, incrementa-se 1 ao `contPares`. Em seguida, verifica-se o número é positivo ou negativo: caso seja maior que zero incrementa-se 1 ao `contPositivos` e caso seja menor que zero, incrementa-se 1 ao `contNegativos`.

```c
            if( valor%2 == 0){
                contPares++; 
                        if( valor > 0){
                                contPositivos++;
                        }else if( valor < 0){
                                contNegativos++;
                        }
            }
```

Se o número em questão não for par, este é necessariamente ímpar e por conta disso, incrementa-se 1 ao `contImpares`. Em seguida, verifica-se se o número é positivo ou negativo, conforme já explicado anteriormente.

```c
            else{
                        contImpares++;
                        if( valor > 0){
                                contPositivos++;
                        }else if( valor < 0){
                                contNegativos++;
                        }
                }
        }
```
Em seguida, escreve-se o contador de pares, impares, positivos e negativos, na respectiva ordem pedida pelo enunciado, na tela utilizando a função `printf`. Lembre-se de utilizar o \n no final, pois o Beecrowd costuma ser bem exigente com a saída da resolução do problema.


```c
        printf("%d valor(es) par(es)\n", contPares);
        printf("%d valor(es) impar(es)\n", contImpares);
        printf("%d valor(es) positivo(s)\n", contPositivos);
        printf("%d valor(es) negativo(s)\n", contNegativos);
```

