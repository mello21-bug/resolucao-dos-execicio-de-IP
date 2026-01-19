#include <stdio.h>

struct Pokemon {
    char nome[51];
    char tipo[20];
    float ataque;
    float defesa;
    float fatorVantagem;
};

int main() {
    char nomeInimigo[51], tipoInimigo[20];
    float atkInimigo, defInimigo;
    
    // 1. Leitura do Inimigo
    if (scanf("%s %s %f %f", nomeInimigo, tipoInimigo, &atkInimigo, &defInimigo) != 4) return 0;

    int n;
    scanf("%d", &n);
    struct Pokemon ash[50]; // Limite do problema

    // 2. Leitura e Cálculo
    for (int i = 0; i < n; i++) {
        scanf("%s %s %f %f", ash[i].nome, ash[i].tipo, &ash[i].ataque, &ash[i].defesa);
        
        float atkEfetivo = ash[i].ataque;

        // Lógica de Vantagem sem strcmp (comparando apenas a primeira letra do tipo)
        // agua > fogo | grama > agua | fogo > grama
        if ((ash[i].tipo[0] == 'a' && tipoInimigo[0] == 'f') ||
            (ash[i].tipo[0] == 'g' && tipoInimigo[0] == 'a') ||
            (ash[i].tipo[0] == 'f' && tipoInimigo[0] == 'g')) {
            atkEfetivo *= 1.5;
        }

        ash[i].fatorVantagem = atkEfetivo - defInimigo;
    }

    // 3. Ordenação Bubble Sort (Sem funções de biblioteca)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            int trocar = 0;

            if (ash[j].fatorVantagem < ash[j + 1].fatorVantagem) {
                trocar = 1;
            } 
            else if (ash[j].fatorVantagem == ash[j + 1].fatorVantagem) {
                // Comparação manual de strings para ordem alfabética
                int k = 0;
                while (ash[j].nome[k] == ash[j+1].nome[k] && ash[j].nome[k] != '\0') k++;
                if (ash[j].nome[k] > ash[j+1].nome[k]) trocar = 1;
            }

            if (trocar) {
                struct Pokemon temp = ash[j];
                ash[j] = ash[j + 1];
                ash[j + 1] = temp;
            }
        }
    }

    // 4. Saída
    for (int i = 0; i < n; i++) {
        printf("%d. %s\n", i + 1, ash[i].nome);
    }

    return 0;
}