# Problema

Leia um valor e faça um programa que coloque o valor lido na primeira posição de um vetor N[10]. Em cada posição subsequente, coloque o dobro do valor da posição anterior. Por exemplo, se o valor lido for 1, os valores do vetor devem ser 1,2,4,8 e assim sucessivamente. Mostre o vetor em seguida.

> Problema completo: https://www.urionlinejudge.com.br/judge/pt/problems/view/1173

# Resolução

Para resolver o problema, vamos ler o valor, alocá-lo e multiplicá-lo por 2 subsequentemente em cada posição do vetor.

Começamos declarando nossas variáveis a serem utilizadas no problema. Todas serão do tipo `int`, por seremos números inteiros.
Serão `n[10]` o vetor de 10 posições pedido pelo exercício, `i` o contador de loops da estrutura de repetição.

```c
    int n[10], i;
```

Em seguida, iremos ler o valor da primeira posição e alocá-lo na variável `n[0]` (isso nos garante que a primeira posição já comece com o valor inicial da multiplicação) com a estrutura `scanf`. Logo após, imprimimos o valor lido, pois esse é o número que será a base da multipicção que aconntecerá nas próximas posições.

```c
    scanf("%d", &n[0]);
    printf("N[%d] = %d\n", 0, n[0]);

```
Seguimos com o código realizando um laço de repetição `for`, onde iremos inicializar do 1, pois a nossa primeira posição 0 já foi preenchida, a condição será até que `i<=9`, e incrementaremos a variável i. Algo crucial desse laço é a multiplicação, que faremos o seguinte: A partir da posição 1, cada posição receberá o dobro do valor que está na posição anterior. Em outras palavras, ` n[i]=n[i-1]*2;`. E em seguinda imprimos cada posição.

```c
for(i=1; i<=9; i++)
    {
        n[i]=n[i-1]*2;

        printf("N[%d] = %d\n", i, n[i]);

    }
```