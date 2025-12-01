# Problema:
Faça um programa que leia um valor N. Este N será o tamanho de um vetor X[N]. A seguir, leia cada um dos valores de X, encontre o menor elemento deste vetor e a sua posição dentro do vetor, mostrando esta informação.

> Problema Completo: https://www.urionlinejudge.com.br/judge/pt/problems/view/1180


# Resolução:
É importante armazenarmos o primeiro valor de entrada para que o vetor a ser utilizado tenha o tamanho necessário. Além disso, este conterá cada uma das próximas N entradas, para que sejam analisadas com o intuito de encontrar a de menor valor, bem como sua posição.  

Seguindo a sugestão do enunciado, é declarada a inteira `N`, com o objetivo de armazenar o tamanho do vetor a ser utilizado. Além disso, como exige-se que sejam fornecidos o menor valor obtido e a posição deste, declaramos as variáveis `menorValor` e `posicao`, respectivamente. Esta última é inicializada com o valor 0 para representar a 1ª posição do vetor que, de acordo com a padronização da linguagem C, possui índice igual a 0.

```c
int N, posicao=0, menorValor;
```

Realizamos a leitura da primeira entrada, através da função `scanf()`; obtendo, assim, o valor inteiro `N`. Com isso, temos o valor necessário para que seja possível declarar o vetor `X` com seu devido tamanho. A variável `i`, também declarada, servirá de auxilio posteriormente.

```c
scanf("%d",&N);
int X[N], i;
```

Em seguida, realizamos o loop `for` iterando de acordo com as `N` próximas entradas a serem lidas e analisadas. Para isto, a leitura será feita através da função `scanf()` e armazenada na posição `i` do vetor `X`.

```c
for(i=0;i<N;i++){
		scanf("%d",&X[i]);
  ...
}
```
Antes de começar as comparações, o programa assume que o menor valor é o primeiro elemento do vetor.
A variável posicao é inicializada como 0, indicando que até o momento o menor valor está na posição 0

```c
    menorValor = X[0]; 
```

A partir do segundo elemento (i = 1), o programa compara cada número com o menor valor já encontrado:

Se encontrar um número menor, atualiza menorValor. Também atualiza posição com o índice em que esse menor valor foi encontrado.

```c
 for (int i = 1; i < N; i++) {
        if (X[i] < menorValor) {
            menorValor = X[i];
            posicao = i;
        }
    }

```

Por fim, basta que sejam exibidos na tela (utilizando-se `printf()`) o menor valor encontrado e a posição deste no vetor. Vale destacar que é essencial inserir na função de saída os textos "Menor valor:" e "Posicao: ", como exemplificado no exercício.

```c
printf("Menor valor: %d\n",menorValor);
printf("Posicao: %d\n",posicao);
```