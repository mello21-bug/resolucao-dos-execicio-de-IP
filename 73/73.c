#include <stdio.h>

// Definição da estrutura para armazenar as características do habitante
struct Habitante {
    int idade;
    char sexo;
    char cabelo;
    char olhos;
};

int main() {
    struct Habitante pessoas[100];
    int totalPessoas = 0;
    int idadeMaisVelho = -1;
    int contMulheresFiltro = 0;

    // Loop para leitura dos dados
    while (1) {
        int idadeTemp;
        scanf("%d", &idadeTemp);

        // Condição de parada: idade igual a -1
        if (idadeTemp == -1) {
            break;
        }

        pessoas[totalPessoas].idade = idadeTemp;

        // Leitura dos dados de sexo, cabelo e olhos
        // O espaço antes de %c serve para ignorar o \n e espaços em branco
        scanf(" %c %c %c", &pessoas[totalPessoas].sexo, 
                            &pessoas[totalPessoas].cabelo, 
                            &pessoas[totalPessoas].olhos);

        // Atualiza a idade do habitante mais velho
        if (pessoas[totalPessoas].idade > idadeMaisVelho) {
            idadeMaisVelho = pessoas[totalPessoas].idade;
        }

        // Verifica os critérios:
        // Mulher (f), entre 18 e 35 anos, loura (l) e olhos verdes (v)
        if (pessoas[totalPessoas].sexo == 'f' &&
            pessoas[totalPessoas].idade >= 18 && pessoas[totalPessoas].idade <= 35 &&
            pessoas[totalPessoas].cabelo == 'l' &&
            pessoas[totalPessoas].olhos == 'v') {
            contMulheresFiltro++;
        }

        totalPessoas++;
    }

    // Cálculo da porcentagem em relação ao TOTAL de pessoas
    float porcentagem = 0.0;
    if (totalPessoas > 0) {
        porcentagem = (float)contMulheresFiltro * 100 / totalPessoas;
    }

    // Saída formatada conforme o exemplo
    printf("Mais velho: %d\n", idadeMaisVelho);
    printf("Mulheres com olhos verdes, loiras com 18 a 35 anos: %.2f%%\n", porcentagem);

    return 0;
}