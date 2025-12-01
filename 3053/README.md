# Problema:
Uma brincadeira muito comum e divertida entre dois jogadores usa uma moeda e três copos opacos (ou seja, não é possível ver o que está dentro do copo olhando pela lateral do copo). Os três copos são colocados com a boca para baixo, em uma linha, um ao lado do outro, em posições que vamos chamar de A, B e C. Uma moeda é colocada embaixo de um dos copos. Na brincadeira, um jogador chamado banca realiza um movimento para trocar a posição de dois copos, arrastando os copos de tal modo que se a moeda está em baixo de um dos copos envolvidos no movimento, ela continua embaixo do mesmo copo após a troca de posição. O jogador banca pode realizar três tipos de movimento, ilustrados na figura abaixo:

1. Trocar o copo na posição A com o copo na posição B.

2. Trocar o copo na posição B com o copo na posição C.

3. Trocar o copo na posição A com o copo na posição C.

O jogador banca realiza vários movimentos de troca tentando confundir o outro jogador, chamado espectador. Ao final o jogador espectador deve dizer em qual posição está a moeda. Por exemplo, considere que inicialmente a moeda está embaixo do copo na posição A e que o jogador banca realiza uma sequência de apenas três trocas, executando um movimento do tipo 1, após o qual moeda termina embaixo do copo na posição B, seguido de um movimento do tipo 2, após o qual a moeda termina embaixo do copo na posição C, seguido de um movimento do tipo 3, após o qual a moeda termina embaixo do copo na posição A.

Nesta tarefa, dadas a descrição da sequência de movimentos e a posição inicial da moeda, você deve escrever um programa que determine a posição final da moeda após todos os movimentos.

<img src="https://resources.urionlinejudge.com.br/gallery/images/problems/UOJ_3040.png" />
 
##### Link do problema: https://www.urionlinejudge.com.br/judge/pt/problems/view/3053
 
 
# Resolução:
 
Para resolver o problema, representamos os três copos em um vetor de três posições.
Cada posição do vetor corresponde diretamente a um copo:

posição 0 = A
posição 1 = B
posição 2 = C

No início, marcamos todos os copos como vazios ('-'), e apenas o copo que contém a moeda recebe o caractere 'X'. Esse 'X' representa a moeda. Assim, sempre que ocorre uma troca de copos, a moeda também "viaja" junto, pois estamos trocando as posições do vetor.

Após ler todos os movimentos, basta verificar qual posição contém o 'X' para determinar qual copo possui a moeda no final.

```c

int N;
char moeda;

char copos[3] = {'-', '-', '-'}, aux;
int movimento, i;
```

`N`: quantidade de movimentos.

`moeda`: letra que indica o copo inicial da moeda (A, B ou C).

`copos[3]`: vetor de três posições que representa os copos. Inicialmente todos são '-', pois estão vazios.

`aux`: variável auxiliar usada para realizar trocas entre posições.

`movimento`: número do movimento lido.

`i`: contador para laços.


Agora, realizamos a leitura de quantos movimentos serão feitos e em qual copo a moeda irá começar:

```c
scanf("%d", &N);
scanf(" %c", &moeda);
```

Para marcar onde a moeda se encontra, usamos uma técnica simples:
converter a letra (A, B ou C) em índice numérico. 

```c
copos[moeda - 'A'] = 'X';
```

Aqui acontece algo muito importante:

'A' tem código ASCII 65

'B' é 66

'C' é 67

Quando fazemos `moeda - 'A'`, Isso vira:

'A' - 'A' = 0 → posição 0 (65-65)

'B' - 'A' = 1 → posição 1 (66-65)

'C' - 'A' = 2 → posição 2 (67-65)


Então o código marca a posição da moeda assim:

Copo A → copos[0] = 'X'

Copo B → copos[1] = 'X'

Copo C → copos[2] = 'X'

---
Sabendo disso, entramos em um laço de repetição para indicar qual movimento será realizado. Tendo noção que indicaremos qual passo iremos realizar por 1, 2 e 3, podemos fazer um switch.

```c
for(i = 0; i < N; i++) {
    scanf("%d", &movimento);

    switch (movimento) {
        case 1: // A <-> B
            aux = copos[0];
            copos[0] = copos[1];
            copos[1] = aux;
            break;

        case 2: // B <-> C
            aux = copos[1];
            copos[1] = copos[2];
            copos[2] = aux;
            break;

        case 3: // A <-> C
            aux = copos[0];
            copos[0] = copos[2];
            copos[2] = aux;
            break;
    }
}
```

Se a moeda estiver em um dos copos trocados, ela muda de posição automaticamente, pois estamos trocando o conteúdo das posições do vetor.

Após todas as trocas, basta encontrar em qual posição está a moeda ('X'), e imprimos a posição encontrada:

```c
for(i = 0; i < 3; i++){
    if(copos[i] == 'X'){
        printf("%c\n", 'A' + i);
    }
}

```
Aqui usamos novamente a correspondência entre índice e letra:

índice 0 → 'A' + 0 = 'A'

índice 1 → 'A' + 1 = 'B'

índice 2 → 'A' + 2 = 'C'

Portanto, imprimimos exatamente o copo onde a moeda se encontra.


