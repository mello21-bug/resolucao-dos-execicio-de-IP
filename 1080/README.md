# Problema:

Leia 100 valores inteiros. Apresente então o maior valor lido e a posição dentre os 100 valores lidos.

> Problema Completo: https://www.urionlinejudge.com.br/judge/pt/problems/view/1080
---

# Resolução:

Para iniciamos a resolver esse problema devemos fazer a declaração de três variáreis do tipo `int`, sendo elas: *valor*, *maiorValor* e *posicao*. As variáveis *maiorValor* e *posicao* devem serem inicializadas com 0,  pois serão incrementados mais a frente. Caso não sejam inicializados, essas variáveis terão um valor aleatório e provavelmente irão levar a um resultado errado.

```c
    int valor;
    int maiorValor = 0; 
    int posicao = 0;
```

Por ainda não sabemos quem é o maior valor que será atribuido para a variável `maiorValor` e como o exercício deseja que seja somente números positivos, essa variável receberá por agora 0.

Em seguida, iniciamos o loop, para esse exercício faremos o uso do `for`. Vale resaltar que a declaração da variável `i`, pode ser feita antes ou no próprio laço de repetição, as duas formas estão corretas.

```c
    for (int i = 0; i < 100; i++) 
```

Durante o laço de repetição iremos ler o valor digitado pelo o usuario através do `scanf`. 

```c
    for (int i = 0; i < 100; i++) {
        scanf("%d", &valor);
```

Logo após entramos em uma condicional `(if)`, onde iremos comparar se número que foi atribuido a `valor` é maior que o número atual amazenado na variável `maiorValor`, se sim, `maiorValor` recebe o número que `valor` e `posicao` recebe o número que `i` esta amazenando atualmente.

```c
    for (int i = 0; i < 100; i++) {
        scanf("%d", &valor);

        if (valor > maiorValor) {
            maiorValor = valor;
            posicao = i;
        }
    }
```
Por fim, já estando fora do loop, exibimos qual é o maior valor e a posição que foi encontrado com a estrutura `printf`. Lembre-se de utilizar o \n no final, pois o beecrowd costuma ser bem exigente com a saída da resolução do problema.
