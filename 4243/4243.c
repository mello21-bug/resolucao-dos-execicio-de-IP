#include <stdio.h>
#include <math.h>

// Definição da estrutura para o Paciente
struct Paciente {
    char nome[50];
    double peso;
    double altura;
};

int main() {
    int n;

    // Lendo a quantidade de pacientes
    if (scanf("%d", &n) != 1) return 0;

    // Criando o vetor de estruturas
    struct Paciente lista[n];

    // Entrada de dados
    for (int i = 0; i < n; i++) {
        // O espaço antes de %49[^\n] é crucial para ignorar o \n do buffer
        scanf(" %49[^\n]", lista[i].nome);
        scanf("%lf %lf", &lista[i].peso, &lista[i].altura);
    }

    // Processamento e Saída
    for (int i = 0; i < n; i++) {
        // Cálculo do IMC: peso / altura²
        double imc = lista[i].peso / (lista[i].altura * lista[i].altura);
        
        // Impressão do nome
        printf("%s:\n", lista[i].nome);

        // Classificação direta
        if (imc < 18.5) {
            printf("Baixo peso\n");
        } else if (imc < 25.0) {
            printf("Peso normal\n");
        } else if (imc < 30.0) {
            printf("Sobrepeso\n");
        } else if (imc < 35.0) {
            printf("Obesidade grau I\n");
        } else if (imc < 40.0) {
            printf("Obesidade grau II\n");
        } else {
            printf("Obesidade grau III\n");
        }

        // Linha em branco para separar os pacientes conforme o exemplo
        printf("\n");
    }

    return 0;
}