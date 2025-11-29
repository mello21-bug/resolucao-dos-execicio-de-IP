# Problema

Leia um valor e faça um programa que coloque o valor lido na primeira posição de um vetor N[10]. Em cada posição subsequente, coloque o dobro do valor da posição anterior. Por exemplo, se o valor lido for 1, os valores do vetor devem ser 1,2,4,8 e assim sucessivamente. Mostre o vetor em seguida.

> Problema completo: https://www.urionlinejudge.com.br/judge/pt/problems/view/1173

# Resolução

Para resolver o problema, vamos ler o valor, alocá-lo e multiplicá-lo por 2 subsequentemente em cada posição do vetor.

Começamos declarando nossas variáveis a serem utilizadas no problema. Todas serão do tipo `int`, por seremos números inteiros.
Serão `n[10]` o vetor de 10 posições pedido pelo exercício, `i` o contador de loops da estrutura de repetição e `v` o valor a ser colocado em cada posição do vetor.

```c
    int n[10], i, v;
````

Em seguida, iremos ler o valor da primeira posição e alocá-lo na variável `v` com a estrutura `scanf`.

```c
    scanf("%d", &v);
````