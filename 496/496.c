#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char tipo[50], cidade[50];
    int estrelas;
    
    int hoteis_jp_5 = 0;
    int soma_estrelas_cg = 0;
    int qtd_cg = 0;
    int pousadas_rio_tinto = 0;

    for (int i = 0; i < 10; i++) {
        // Leitura do tipo
        fgets(tipo, 50, stdin);
        // Tratamento manual da string tipo (remover \n e tolower)
        for (int j = 0; tipo[j] != '\0'; j++) {
            if (tipo[j] == '\n') tipo[j] = '\0';
            else tipo[j] = tolower(tipo[j]);
        }

        // Leitura das estrelas
        scanf("%d", &estrelas);
        getchar(); // Limpa o buffer para o próximo fgets

        // Leitura da cidade
        fgets(cidade, 50, stdin);
        // Tratamento manual da string cidade (remover \n e tolower)
        for (int j = 0; cidade[j] != '\0'; j++) {
            if (cidade[j] == '\n') cidade[j] = '\0';
            else cidade[j] = tolower(cidade[j]);
        }

        // Processamento das condições
        if (strcmp(tipo, "hotel") == 0 && estrelas == 5 && strcmp(cidade, "joão pessoa") == 0) {
            hoteis_jp_5++;
        }

        if (strcmp(cidade, "campina grande") == 0) {
            soma_estrelas_cg += estrelas;
            qtd_cg++;
        }

        if (strcmp(tipo, "pousada") == 0 && strcmp(cidade, "rio tinto") == 0) {
            pousadas_rio_tinto++;
        }
    }

    // Saída dos resultados
    printf("%d\n", hoteis_jp_5);
    
    if (qtd_cg > 0) printf("%d\n", soma_estrelas_cg / qtd_cg);
    else printf("0\n");
    
    printf("%d\n", pousadas_rio_tinto);

    return 0;
}