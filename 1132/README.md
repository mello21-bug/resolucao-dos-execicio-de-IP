# Problema:    
Escreva um algoritmo que leia 2 valores inteiros X e Y calcule a soma dos números que não são múltiplos de 13 entre X e Y, incluindo ambos.

> Problema completo: https://www.urionlinejudge.com.br/judge/pt/problems/view/1132
---

# Resolução:
O exercício pede para calcular a soma de números não-múltiplos de 13, entre X e Y. Tomando o exemplo de entrada e saída fornecido, devemos percorrer todos os números entre 100 e 200 e somar os que não são múltiplos de 13. Para isso, faremos um loop de um número ao outro e, dentro do loop, uma verificação para cada número.

Começamos declarando as variáveis de entrada `X` e `Y`, uma variável `i` para utilizar no loop e `soma` para armazenar a soma dos números.
```c
int X, Y, i, soma;
```

Fazemos a leitura dos valores `X` e `Y` e inicializamos `soma` com 0.
```c
scanf("%d %d", &X, &Y);

soma = 0;
```

O exercício permite que os valores venham fora de ordem, então precisamos garantir que o loop sempre comece pelo menor número.
Para isso, verificamos se `X > Y`. Se for o caso, apenas trocamos os dois valores usando uma variável temporária:

```c
if (X > Y) {
    int temp = X;
    X = Y;
    Y = temp;
}
```
Com isso, temos certeza de que `X` é o menor valor e `Y` o maior.


```c
for (i = X; i <= Y; i++) {
    if (i % 13 != 0)
        soma += i;
}
```
A expressão `i % 13` calcula o resto da divisão por 13.
Se o resto for diferente de 0 `(i % 13 != 0)`, significa que o número não é múltiplo de 13, então somamos.


Por fim, exibimos o valor da soma na tela e pulamos uma linha com `\n`, requisito comum do Beecrowd.

```c
printf("%d\n", soma);
```