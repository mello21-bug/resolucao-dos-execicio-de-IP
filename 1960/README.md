# Problema:

A ECI (Editio Chronica Incredibilis ou Editora de Crônicas Incríveis) é muito tradicional quando se trata de numerar as páginas de seus livros. Ela sempre usa a numeração romana para isso. E seus livros nunca ultrapassam as 999 páginas pois, quando necessário, dividem o livro em volumes.

Você deve escrever um programa que, dado um número arábico, mostra seu equivalente na numeração romana.

Lembre que I representa 1, V é 5, X é 10, L é 50, C é 100, D é 500 e M representa 1000.

Você deve escrever um programa que, dado um número arábico, mostra seu equivalente na [numeração romana](https://brasilescola.uol.com.br/matematica/algarismos-romanos.htm).

**Problema completo:** https://www.urionlinejudge.com.br/judge/pt/problems/view/1960

# Resoluçāo:

A ideia deste método de resolução é converter um número arábico em algarismo romano subtraindo valores conhecidos, começando sempre do maior para o menor. Para isso, utilizamos dois vetores paralelos:

um vetor de valores inteiros, contendo os números arábicos equivalentes;

um vetor de strings, contendo seus respectivos símbolos romanos. 

Como o programa realiza entrada e saída padrão, utilizamos a biblioteca `stdio.h`.
Além disso, como trabalhamos com strings e utilizamos a função strcat para concatenação, é necessário incluir a biblioteca `string.h`.

```c
    #include <stdio.h>
    #include <string.h>
```

Declaramos a variável inteira `N`, responsável por armazenar o número arábico informado na entrada. Em seguida, realizamos a leitura desse valor.

```c
int N;
scanf("%d", &N); 
```

Em seguida, declaramos dois vetores:

- Vetor `valores`

Contém os valores arábicos correspondentes aos símbolos romanos, organizados do maior para o menor, incluindo os casos especiais da numeração romana, como 900 (CM), 400 (CD), 90 (XC), etc.

```c
    int valores[] = {900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
```

- Vetor `romanos`

Contém os símbolos romanos correspondentes a cada valor do vetor `valores`.
Cada string possui no máximo 2 caracteres, além do caractere '\0', por isso a matriz é declarada com tamanho [3].

```c
    char romanos[][3] = {"CM", "D", "CD", "C", "XC", "L", "XL","X", "IX", "V", "IV", "I"};
```
A posição de cada elemento em `romanos` corresponde diretamente à posição do seu valor equivalente em `valores`.

* String para armazenar o resultado

A variável `resultado` é um vetor de caracteres que armazenará o número convertido para algarismos romanos.
Ela é inicializada como uma string vazia para garantir que a função `strcat` funcione corretamente.

```c
    char resultado[50] = "";
```
Também declaramos a variável `i`, que será usada como índice para percorrer os vetores `valores` e `romanos`.

```c
    int i = 0;    
```

O processo de conversão ocorre dentro de um laço while, que continua enquanto N for maior que zero.

```c
    while (N > 0) {
```

Dentro do laço:

- Se N for maior ou igual ao valor atual do vetor valores[i], o símbolo romano correspondente é concatenado à string resultado usando strcat.

- Em seguida, esse valor é subtraído de N.

- Caso contrário, o índice i é incrementado para testar o próximo valor menor.

```c
   if (N >= valores[i]) {
    strcat(resultado, romanos[i]);
    N -= valores[i];
} else {
    i++;
}
```

Esse processo se repete até que N seja reduzido a zero, garantindo que toda a conversão seja realizada corretamente.

```c
printf("%s\n", resultado);
```