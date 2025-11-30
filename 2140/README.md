# Problema

Gilberto é um famoso vendedor de esfirras na região. Porém, apesar de todos gostarem de suas esfirras, ele só sabe dar o troco com duas notas, ou seja, nem sempre é possível receber o troco certo. Para facilitar a vida de Gil, escreva um programa para ele que determine se é possível ou não devolver o troco exato utilizando duas notas.

As notas disponíveis são: 2, 5, 10, 20, 50 e 100.

> Problema completo: https://www.urionlinejudge.com.br/judge/pt/problems/view/2140

# Resolução

Para resolver o problema, iremos avaliar todos os possíveis valores que podemos devolver o troco exato, salvar em um vetor e avaliar todos os casos comparando-os com o vetor.

Primeiro iremos declarar nossas variáveis. Como são valores inteiros, serão do tipo `int`. As variáveis serão `N` e `M`, conforme o enunciado, a variavel de troco que o cliente precisa `troco`, o contador da estrutura de repetição `i` e o contador de verificação se é possível ou não `contador`.
```c
    int N, M;
    int notas[] = {2, 5, 10, 20, 50, 100};
    int i, j, troco;
```

Teremos, também, o vetor de valores possíveis de troco, com todos os valores aceitáveis.
```c
    int notas[] = {2, 5, 10, 20, 50, 100};
```

Faremos uma estrutura de repetição `while` com condição de parada 1, sendo um loop infinito até que seja quebrado por uma estrutura `break` dentro do loop.
```c
    while(1)
```

Iremos ler as entradas de valor do produto `N` e valor pago pelo cliente `M` com a estrutura `scanf`.
```c
        scanf("%d%d", &N, &M); 
```

Caso os valores lidos sejam ambos 0, saímos do `while` e terminamos o programa
```c
        if(N==0 && M==0) 
            break;
```

Caso não entre na condição de término, calcularemos qual o troco que o cliente precisa receber e inicializamos a variável `possible=0`.
```c
        troco = M - N;
        int possible = 0;
```

Agora, precisaremos de um `duplo for` que é responsável por verificar se o troco pode ser formado usando exatamente duas notas. Para isso, utilizamos o vetor notas, que contém os valores disponíveis: `2, 5, 10, 20, 50 e 100`. Como precisamos testar todas as combinações possíveis entre essas notas, fazemos um `laço duplo`, onde o `primeiro for` percorre cada nota possível para a primeira posição e o `segundo for` percorre novamente todas as notas possíveis para a segunda posição. Dessa forma, geramos todas as 36 combinações possíveis entre duas notas. Em cada repetição, somamos `notas[i] com notas[j]` e verificamos se essa soma é igual ao valor exato do `troco`. Caso alguma combinação resulte exatamente no troco desejado, significa que é possível entregar o troco usando duas notas, então marcamos a variável possible recebe 1.
```c
   for (i = 0; i < 6; i++) {
            for (j = 0; j < 6; j++) {
                if (notas[i] + notas[j] == troco)
                    possible = 1;
            }      
```

Caso o contador seja 1, exibimos a mensagem de que é possível dar o troco com a estrutura `printf`.
```c
        if(possible) 
            printf("possible\n");
```

Caso contrário, informamos que não é possível.
```c
        else 
            printf("impossible\n");
```