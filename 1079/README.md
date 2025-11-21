# Problema 

Leia 1 valor inteiro N, que representa o número de casos de teste que vem a seguir. Cada caso de teste consiste de 3 valores reais, cada um deles com uma casa decimal. Apresente a média ponderada para cada um destes conjuntos de 3 valores, sendo que o primeiro valor tem peso 2, o segundo valor tem peso 3 e o terceiro valor tem peso 5.

> Problema completo: https://www.urionlinejudge.com.br/judge/pt/problems/view/1079

---
# Resolução:

Começamos declarando as variáveis que serão utilizadas no exercício. Para declarar, usaremos o tipo float (número flutuante), pois o problema pede que sejam valores reais:

```c
float nota1, nota2, nota3, total, media;
```
Para declarar o número de casos e o contador da estrutura de repetição que utilizaremos a seguir, usaremos o tipo `int`

```c
int cont, casos;
```

Para ler o número de casos de teste, utilizamos a estrutura `scanf`

```c
scanf("%d", &casos);
```
Para ler cada um dos casos e calcular as médias, utilizaremos a estrutura de repetição `for`. A variável `cont` será nosso contador da estrutura, para contabilizar cada caso. Primeiro, ela começa com o valor = 0. Os valores que ela poderá obter são menores que os casos. Para que mude de valor, `cont` será incrementada toda vez que uma repetição ocorrer, que faremos com `cont++` (que funciona de forma similar a cont = cont + 1). Cada uma dessas condições é representada dentro da estrutura `for`.

```c
for(cont=0; cont<casos; cont++)
```
Lemos cada uma das notas com a estrutura `scanf`, desta vez com `%f` que representa uma variável `float`.
```c
scanf("%f%f%f", &nota1, &nota2, &nota3);
```

Calculamos qual será o valor da primeira soma com cada nota lida e seus respectivos pesos e salvamos na variável `total`

```c
total = nota1*2.0 + nota2*3.0 + nota3*5.0;
```
Por fim, dividimos a soma em `total` por 10.0 para obter a média ponderada final

```c
media = total/10.0;
```
Exibimos a média ponderada final com a estrutura `printf`. Lembre-se de utilizar o \n no final, pois o URI costuma ser bem exigente com a saída da resolução do problema.

```c
printf("%.1f\n", media);
```

Essa repetição termina, `cont` é incrementado e o `for` executa esses passos novamente, até que cont chegue em 1000, e termina a execução.