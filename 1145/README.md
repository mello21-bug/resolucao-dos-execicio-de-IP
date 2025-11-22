# Problema:    
Escreva um programa que leia dois valores X e Y. A seguir, mostre uma sequência de 1 até Y, passando para a próxima linha a cada X números.

> Problema completo: https://www.urionlinejudge.com.br/judge/pt/problems/view/1145
---


# Resolução:
Para resolver o exercício, devemos ler os valores digitados e exibir um contador de 1 até Y, imprimindo um `"\n"` (quebra de linha) a cada X números.  
O primeiro passo é declarar as variáveis necessárias para o problema: `X`, `Y` e `i`, que será nosso contador.  

```c
int X, Y, i;
```

Em seguida, faremos a leitura dos valores `X` e `Y`.

```c
scanf("%d %d", &X, &Y);
```

Para imprimir uma sequência de 1 até Y, vamos utilizar o loop `for(i = 1; i <= Y; i++)`. Dentro do loop, utilizamos a função `printf` para exibir o número na tela. É importante lembrar que, após o último número da linha, **não deve haver espaço**.

#### Mas como sabemos quando pular linha?

Calculando o resto da divisão! Devemos pular uma linha toda vez que X números forem impressos, ou seja, toda vez que o último número for múltiplo de `X`. Sabemos que, quando o número é múltiplo de `X`, o resto da divisão de `i` por `X` é igual a 0.  
Usamos o operador `%` para o cálculo do resto, a partir da seguinte lógica:  

- Se o resto `i % X` for igual a `0`, pular a linha
- Se não, colocar um espaço após o número

```c
for (i = 1; i <= Y; i++) {
    printf("%d", i);

    if (i % X == 0)
        printf("\n");
    else
        printf(" ");
}
```