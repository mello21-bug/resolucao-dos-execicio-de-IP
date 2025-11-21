# Problema:

Leia um valor inteiro N. Apresente todos os números entre 1 e 10000 que divididos por N dão resto igual a 2.

> Problema completo: https://www.urionlinejudge.com.br/judge/pt/problems/view/1075

---

# Resolução:

Para resolver o problema, vamos receber o valor N e, ao testar dividindo todos os números de 1 a 10000 por N, verificaremos se o resto da divisão é 2.

Começamos declarando as variáveis que serão utilizadas no exercício. Para declarar, usaremos o tipo `int`, por serem números inteiros:

```c
int cont, N;
```
Para a leitura do valor que nossa variável N terá, usaremos a estrutura scanf:

```c
scanf("%d", &N);
```
Para dividir todos os números de 1 a 10000 por *N*, usaremos a estrutura de repetição `for`. A variável `cont` será nosso contador da estrutura, que também fará as divisões. Primeiro, ela começa com o valor = 0. Os valores que ela poderá obter são menores que 10000. Para que mude de valor, `cont` será incrementada toda vez que uma repetição ocorrer, que fazemos com `cont++`, que funciona de forma similar a cont = cont + 1. Cada uma dessas condições é representada dentro da estrutura `for`.

```c
for(cont=0; cont<10000; cont++)
```

Para verificar se o resto da divisão é 2, utilizaremos o operador `%.` Este operador faz a divisão do contador com o número *N*, e verifica o resto da divisão. Utilizando a estrutura `if`, verificamos se o resto da divisão de cont por *N* é igual a 2.

```c
if(cont%N == 2)
```

Caso seja, imprimimos esse número, pois é um dos valores pedidos pelo exercício. Lembre-se de utilizar o \n no final, pois o Beecrowd costuma ser bem exigente com a saída da resolução do problema.
```c
printf("%d\n", cont);
```
