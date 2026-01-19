# Problema:
Os dados armazenados no computador estão em binário. Uma forma econômica de ver estes números é usar a base 16 (hexadecimal).

Sua tarefa consiste em escrever um programa que, dado um número natural na base 10, mostre sua representação em hexadecimal.

**Problema Completo**: https://www.urionlinejudge.com.br/judge/pt/problems/view/1957


# Resolução:
O objetivo deste exercício é bem simples: transformar um número que está 10 para a base 16. Portanto, é importante relembrarmos a correspondência destas:
Base 10 | Base 16
--------|---------
   0    |    0
   1    |    1
   2    |    2
   3    |    3
   4    |    4
   5    |    5
   6    |    6
   7    |    7
   8    |    8
   9    |    9
   10   |    A
   11   |    B
   12   |    C
   13   |    D
   14   |    E
   15   |    F
   16   |    10
   17   |    11
  ...   |    ...

Visto que a base 16 inclui caracteres (strings), é essencial a importação da biblioteca `string.h` para possibilitar seu uso.  

```c
#include <string.h>
```  

Como primeiro passo, declaramos a variável inteira `V`, na qual será guardado, através da função `scanf()`, o número fornecido (pertencente à base 10).  

```c
int V;
scanf("%d",&V);
```  

Observando a tabela anterior, podemos notar que os valores em hexadecimal possuem apenas 16 tipos diferentes de caracteres: `0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E e F`. Tendo esta informação em mãos, declaramos um vetor de caracteres `hex`, que será utilizado para armazenar os dígitos do número convertido para hexadecimal. O tamanho 20 é suficiente para comportar o valor máximo do problema e o caractere de `finalização da string ('\0')`.
Também declaramos a variável inteira i, que será usada como índice para controlar a posição de inserção dos caracteres no vetor.
```c
char hex[20];
int i = 0;
```  

Conforme estabelecido pela [conversão entre sistemas de numeração](https://www.embarcados.com.br/conversao-entre-sistemas-de-numeracao/), precisaremos realizar sucessivas divisões por 16 (guardando o resto obtido) para que, assim, sejam gerados cada um dos dígitos correspondentes ao valor hexadecimal. Desse modo, utilizaremos a estrutura `while` para que tal cálculo seja feito enquanto o número a ser dividido for superior a 0.

A cada conta realizada, usufruímos do resto da divisão (representado por `V % 16`) para indicar a posição correta no vetor `hex`. Por exemplo, caso o excedente da divisão (feita em base decimal) seja 11, iremos considerar, na verdade, o conteúdo da posição 11 de `hex`, que representa exatamente este número na base hexadecimal (ou seja, 'B'). Convertido diretamente em caractere numérico somando '0'. Caso contrário, para valores entre 10 e 15, convertemos o resto em uma letra entre 'A' e 'F'.

Isto será armazenado em `hex`, tendo `i` como auxílio para incrementar sua posição a cada iteração.
Em seguida, é necessário atualizar o valor de `V` como sendo `V/16`, pois já efetuamos esta divisão e, no próximo loop, necessitamos de seu quociente resultante.  

```c
while (V > 0) {
        int resto = V % 16;

        if (resto < 10) {
            hex[i] = resto + '0';
        } else{
            hex[i] = resto - 10 + 'A';
        }

        V /= 16;
        i++;
    }
```  

Após armazenar o dígito correspondente, atualizamos o valor de V, dividindo-o por 16, pois o quociente será utilizado na próxima iteração do laço. Em seguida, incrementamos o índice i.

Ao final do laço, todos os dígitos do número hexadecimal já foram calculados. No entanto, eles estão armazenados em ordem inversa. Antes de corrigir essa ordem, é necessário finalizar corretamente a string adicionando o caractere especial '\0'.

```c
hex[i] = '\0';
```
Esse caractere indica o final da string em C, permitindo que funções como printf reconheçam corretamente seu término.


Como os restos das divisões fornecem os dígitos do número hexadecimal do menos significativo para o mais significativo, a string resultante encontra-se invertida. Para corrigir isso, utilizamos dois índices: inicio, que começa no primeiro caractere da string, e fim, que começa no último caractere válido.

```c
int inicio = 0, fim = i - 1;
```
Enquanto inicio for menor que fim, trocamos os caracteres dessas posições, avançando inicio e retrocedendo fim até que toda a string esteja na ordem correta.

```c
while (inicio < fim) {
    char temp = hex[inicio];
    hex[inicio] = hex[fim];
    hex[fim] = temp;
    inicio++;
    fim--;
}
```
Por fim, exibimos a string resultante, que agora contém o número convertido corretamente para a base hexadecimal.

```c
printf("%s\n", hex);
```
