# Problema:

O objetivo do programa é criptografar uma palavra utilizando o método de César. Esse método consiste em substituir cada letra da palavra por outra letra que esteja K posições à frente no alfabeto.
Além disso, o problema exige que todas as letras sejam tratadas em minúsculo.

> Problema Completo: https://www.thehuxley.com/problem/3629/code-editor/?locale=pt_BR


# Resolução:

A lógica do programa baseia-se em percorrer a string caractere por caractere, aplicando o deslocamento da cifra de César em cada letra, utilizando a tabela ASCII para realizar os cálculos.

Inicialmente, declaramos uma string `palavra` para armazenar a palavra de entrada (com no máximo 30 caracteres) e um inteiro `K`, que representa a chave da criptografia.

```c
    char palavra[31];
    int K;
```
Em seguida, realizamos a leitura da palavra e da chave:

```c
    scanf("%s", palavra);
    scanf("%d", &K);
```

Para saber quantas letras a palavra possui, utilizamos a função `strlen`, que retorna o tamanho da string. Esse valor será usado para controlar o laço de repetição que percorre a palavra.

```c
    int tamanho = strlen(palavra);
```

Utilizamos um laço `for` para percorrer cada posição da string. Em cada iteração, uma letra é processada individualmente.

```c
   for (int i = 0; i < tamanho; i++) {

```
Primeiramente, a letra é convertida para minúscula com a função `tolower`, garantindo que a saída esteja de acordo com o enunciado do problema.

```c
  palavra[i] = tolower(palavra[i]);
```

Depois, aplicamos o deslocamento da cifra de César somando o valor K ao caractere. Como em C os caracteres são representados por números inteiros (tabela ASCII), essa soma desloca a letra no alfabeto.

```c
palavra[i] = palavra[i] + K;
```
Caso o deslocamento ultrapasse a letra `'z'`, é necessário retornar ao início do alfabeto. Isso é feito subtraindo 26, que corresponde à quantidade de letras do alfabeto.

```c
if (palavra[i] > 'z') {
    palavra[i] = palavra[i] - 26;
}
```
Esse processo garante que letras como 'z', ao serem deslocadas, retornem para 'a', mantendo a criptografia correta.

Após processar todos os caracteres da palavra, o resultado final é exibido:

```c
printf("%s\n", palavra);
```
