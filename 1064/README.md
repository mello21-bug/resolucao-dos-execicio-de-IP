# Problema 

Leia 6 valores. Em seguida, mostre quantos destes valores digitados foram positivos. Na próxima linha, deve-se mostrar a média de todos os valores positivos digitados, com um dígito após o ponto decimal.

Problema completo: https://www.urionlinejudge.com.br/judge/pt/problems/view/1064

---
# Resolução

Vale lembrar que a média de um conjunto de N números é obtida somando todos os N valores e dividindo essa soma por N.

Uma forma de resolver o problema é ler cada valor da entrada e, sempre que o número for positivo, adicioná-lo a uma variável `soma` (responsável por acumular todos os valores positivos) e aumentar o contador `contPositivos` em 1.
Ao final da leitura, a média pode ser calculada dividindo `soma` por `contPositivos`.
Como já sabemos exatamente quantos valores devem ser lidos, utilizaremos a estrutura de repetição `for` para realizar a leitura dos 6 valores.

Para representar estes valores no programa, fazemos:

```c
        int contPositivos = 0;
        float valor, soma = 0;

```
Ao declarar uma variável, uma posição da memória será escolhida para tal e esta posição pode conter um valor desconhecido(lixo) já utilizado por outra aplicação. Por isso, `soma` e `contPositivos` precisam ser iniciados com zero, pois serão incrementados mais a frente no decorrer do código. Caso não sejam inicializados, essas variáveis terão valores aleatórios e provavelmente irão levar a um resultado errado.

Para ler a entrada, usa-se scanf dentro da estrutura de repetição. Caso o valor lido seja positivo, adiciona-o à `soma` e se incrementa `contPositivos` em 1.

```c
 int i; // controlador da estrutura de repetição 
        for( i = 0; i < 6; i++){
            scanf("%f", &valor);
            if( valor > 0){
                soma += valor;
                contPositivos++;  
            }
        }
```

Em seguida, exibe-se o resultado: escreve-se o contador de positivos, calcula-se a media e a escreve na tela utilizando a função `printf`. Lembre-se de utilizar o \n no final, pois o Beecrowd costuma ser bem exigente com a saída da resolução do problema.


```c
        printf("%d valores positivos\n", contPositivos);
        printf("%.1f\n", soma/contPositivos);
```

O %.1f será substituido pelo resultado da divisão de soma pelo contPositivos. O '.1' indica quantas casas decimais serão mostradas na tela, que no caso é uma.