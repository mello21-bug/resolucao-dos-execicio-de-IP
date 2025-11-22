# Problema:

Escreva um algoritmo que leia 2 números e imprima o resultado da divisão do primeiro pelo segundo. Caso não for possível mostre a mensagem “divisao impossivel” para os valores em questão.

> Problema completo: https://www.urionlinejudge.com.br/judge/pt/problems/view/1116

---
# Resolução:

O objetivo desse exercício é ler dois valores N vezes, efetuar a divisão caso seja possível e mostrar o resultado na tela.


```c
    int N, x, y, i;
```

Para começar criamos quatro variáveis do tipo `int`. N representa o número de cálculos que serão feitos. *x* e *y* representam os valores do dividendo e divisor, respectivamente e `i` é uma variável auxiliar que será usada no `for`.

Temos que saber quantos casos serão feitos, para isso lemos N usando `scanf`:

```c
    scanf("%d", &N);
```
Com a variável lida, fazemos um laço de repetição usando `for`. Usar o `for` indica que o processo irá se repetir N vezes. Usando a variável i, controlamos o número de casos que já aconteceram:

```c
    for(i=0;i<N;i++) {
      scanf("%d%d", &x, &y);
```

Dentro do laço lemos *x* e *y* para fazer a divisão. Podemos escrever mais de um valor dentro de um `scanf` usando vários `%d`. Em seguida temos que verificar se a divisão é possivel:

```c
      if (y == 0)        
        printf("divisao impossivel\n");
```

A divisão será impossível se y for igual a 0 (y == 0), pois não existe divisão por zero. Caso aconteça, escrevemos na tela a mensagem divisao impossivel com o comando `printf`. Se não fazemos a divisão e mostramos o resultado na tela:

```c
      else
        printf("%0.1lf\n", (double)x/y);
    }
```

Aqui nós não mencionamos uma variável para ser escrita no printf, mas sim uma operação (x/y). Além disso precisamos inserir o `(double) ` antes da divisão para mudar o tipo de variável de `int` para `double`, isso é mencionado no enunciado do exercício como "cast" e, ao mudar o tipo, devemos trocar `%d` por `%lf` para mostrar o valor na tela. O `0.1` indica quantas casas decimais serão apresentadas, que no caso é uma.