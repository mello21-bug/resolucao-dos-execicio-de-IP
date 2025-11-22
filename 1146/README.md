# Problema:

Este programa deve ler uma variável inteira X inúmeras vezes (deve parar quando o valor no arquivo de entrada for igual a zero). Para cada valor lido imprima a sequência de 1 até X, com um espaço entre cada número e seu sucessor.

> Problema completo: https://www.urionlinejudge.com.br/judge/pt/problems/view/1146

---
# Resolução:

Para resolver o exercício, o primeiro passo é declarar as variáveis necessárias para o problema: `X` e `i`. Vamos utilizar a segunda variável em um loop. Em seguida, faremos a leitura do valor `X`.

```c
int X, i;
scanf("%d", &X);
```
Para imprimir a sequência de 1 até X, vamos utilizar um loop `while` que continuará executando enquanto X for diferente de 0.
Dentro desse while, precisamos exibir os números de 1 até X na mesma linha, separados por espaço (mas sem espaço depois do último número, conforme o exercício exige).

Para resolver isso, podemos seguir esta lógica:

- Utilizar um laço `for` que percorra de `1 até X – 1`. Nesse laço, imprimimos cada número seguido de um espaço, pois sabemos que nenhum deles é o último.
- Após o `for`, imprimimos somente o último número (X), sem espaço depois. Em seguida, colocamos apenas a quebra de linha \n para finalizar a sequência.
- Por fim, ainda dentro do `while`, fazemos uma nova leitura com `scanf` para obter outro valor de X. Assim, o processo se repete enquanto o usuário não digitar zero.

```c
while (X != 0) {

    for(i = 1; i < X; i++)
        printf("%d ", i);
    
    printf("%d\n", X);

    scanf("%d", &X);
}

```
