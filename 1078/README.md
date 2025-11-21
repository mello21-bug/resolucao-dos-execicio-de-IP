# Problema:

Leia 1 valor inteiro N (2 < N < 1000). A seguir, mostre a tabuada de N:
1 x N = N 2 x N = 2N ... 10 x N = 10N

> Problema completo: https://www.urionlinejudge.com.br/judge/pt/problems/view/1078

---

# Resolução:

Para resolver o problema, vamos receber o valor *N* e fazer a tabuada deste número multiplicando-o pelos números de 1 a 10.

Começamos declarando as variáveis que serão utilizadas no exercício. Para declarar, usaremos o tipo `int` por serem números inteiros e logo após fazemos a leitura do valor que nossa variável *N* terá, usaremos a estrutura `scanf`:

```c
int N, cont, result;
scanf("%d", &N);
```
Para multiplicar todos os números de 1 a 10 por *N*, usaremos a estrutura de repetição `for`. A variável `cont` será nosso contador da estrutura, que também fará parte das multiplicações. Primeiro, ela começa com o valor = 1. Os valores que ela poderá obter são menores ou igual a 10. Para que mude de valor, `cont` será incrementada toda vez que uma repetição ocorrer, que fazemos com `cont++`, que funciona de forma similar a `cont = cont + 1`. Cada uma dessas condições é representada dentro da estrutura `for`.

```c
for(cont=1; cont<=10; cont++)
```
Fazemos a multiplicação da tabuada, multiplicando o valor em N pelo número de 1 a 10 e salvando esse resultado na variável `result`.
```c
result = cont*N;
```
Por fim, imprimimos cada um desses números. Lembre-se de utilizar o \n no final, pois o Beecrowd costuma ser bem exigente com a saída da resolução do problema.

```c
printf("%d x %d = %d\n", cont, N, result);
```


