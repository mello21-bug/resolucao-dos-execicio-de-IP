# Problema:

Neste problema você deverá ler 15 valores colocá-los em 2 vetores conforme estes valores forem pares ou ímpares. Só que o tamanho de cada um dos dois vetores é de 5 posições. Então, cada vez que um dos dois vetores encher, você deverá imprimir todo o vetor e utilizá-lo novamente para os próximos números que forem lidos. Terminada a leitura, deve-se imprimir o conteúdo que restou em cada um dos dois vetores, imprimindo primeiro os valores do vetor ímpar. Cada vetor pode ser preenchido tantas vezes quantas for necessário.

> Problema Completo: https://www.urionlinejudge.com.br/judge/pt/problems/view/1179


# Resolução:

A lógica do programa é baseada no processamento de cada entrada conforme ela chega. Para isso, utilizamos dois vetores fixos, cada um com cinco posições: um para armazenar valores pares e outro para armazenar valores ímpares. Também usamos duas variáveis (i_par e i_impar) que controlam a próxima posição livre em cada vetor.

```c
    int par[5], impar[5];
    int i_par = 0, i_impar = 0;
```
Esses índices começam em zero e vão aumentando conforme novas entradas são armazenadas.

Utilizamos um único for que executa 15 vezes, lendo cada número com `scanf`:

```c
    for (i = 0; i < 15; i++) {
    scanf("%d", &n);
```

Cada número lido é imediatamente classificado como par ou ímpar usando n % 2. Se for ímpar, o mesmo processo é feito com o vetor impar, usando o índice i_impar.

```c
     if (n % 2 == 0) {
            par[i_par] = n;
            i_par++;
```

Sempre que um dos vetores atingir 5 elementos, ele está “cheio”. Nesse caso, imprimimos seu conteúdo imediatamente: 

```c
    if (i_par == 5) {
    for (int j = 0; j < 5; j++)
        printf("par[%d] = %d\n", j, par[j]);
    i_par = 0; // esvazia o vetor
}
```

O mesmo ocorre com o vetor de ímpares.

Essa parte do programa garante que cada vez que um vetor é preenchido, ele é exibido, esvaziado e preparado para novas entradas sem precisar armazenar todos os 15 valores antes.

Após terminar a leitura dos 15 valores, ainda podem restar elementos não impressos, pois o vetor pode não ter chegado a 5 posições. O enunciado pede que, ao final, primeiro imprimamos os valores ímpar restantes e depois os pares restantes:

```c
    for (i = 0; i < i_impar; i++)
    printf("impar[%d] = %d\n", i, impar[i]);

for (i = 0; i < i_par; i++)
    printf("par[%d] = %d\n", i, par[i]);
```

Assim, mesmo que um vetor esteja parcialmente preenchido, seu conteúdo ainda é exibido corretamente.
