# Problema:

O objetivo do programa é ler duas strings e verificar se elas são iguais ou diferentes.
Caso as duas strings possuam exatamente os mesmos caracteres, na mesma ordem, o programa deve imprimir "IGUAIS".
Caso contrário, deve imprimir "DIFERENTES".

> Problema Completo: vhttps://www.thehuxley.com/problem/253?locale=pt_BR


# Resolução:

A lógica do programa baseia-se na leitura de duas strings e na comparação de seus conteúdos utilizando funções da biblioteca string.h, que fornece recursos adequados para manipulação e comparação de strings em C.

Inicialmente, declaramos duas variáveis do tipo vetor de caracteres, s1 e s2, cada uma com capacidade para armazenar até 50 caracteres, além do caractere especial de fim de string ('\0').

```c
    char s1[51], s2[51];
```
Em seguida, realizamos a leitura das duas strings utilizando a função fgets, que permite a leitura de linhas completas, incluindo possíveis espaços.

```c
    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);

```

A função fgets armazena também o caractere de quebra de linha ('\n') ao final da string, caso ele exista. Para evitar que esse caractere interfira na comparação, é necessário removê-lo. Isso é feito localizando o caractere '\n' na string e substituindo-o pelo caractere '\0'.

```c
    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';

```

Após o tratamento das strings, utilizamos a função strcmp para compará-las. Essa função compara os caracteres das duas strings posição por posição e retorna zero caso elas sejam exatamente iguais.
```c
   if (strcmp(s1, s2) == 0) {
    printf("IGUAIS\n");
} else {
    printf("DIFERENTES\n");
}

```
Por fim, o programa exibe o resultado da comparação conforme especificado no problema.

