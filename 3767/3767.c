#include <stdio.h>
#include <string.h>

#define MAX_RUAS 5

typedef struct {
    char nome[50];
    char sexo;
    char nascimento[11];
    int ordem;
} Pessoa;

typedef struct {
    Pessoa pessoas[4];
    int qtd;
} Casa;

typedef struct {
    Pessoa pessoas[4];
    int qtd;
} Apartamento;

typedef struct {
    Apartamento apt[21][3]; // [andar][apartamento]
} Predio;

typedef struct {
    char nome[50];
    Casa casas[51];     // casas 1..50
    Predio predios[11]; // prédios 1..10
} Rua;

Rua ruas[MAX_RUAS];
int totalRuas = 0;
int ordemGlobal = 0;

/* Busca rua */
int buscarRua(char nome[]) {
    for (int i = 0; i < totalRuas; i++) {
        if (strcmp(ruas[i].nome, nome) == 0)
            return i;
    }
    return -1;
}

/* Inserção */
void inserir() {
    char nomeRua[50];
    scanf(" %[^\n]", nomeRua);

    int idx = buscarRua(nomeRua);
    if (idx == -1) {
        idx = totalRuas;
        strcpy(ruas[totalRuas].nome, nomeRua);
        totalRuas++;
    }

    char tipo;
    scanf(" %c", &tipo);

    Pessoa p;
    p.ordem = ordemGlobal++;

    if (tipo == 'c') {
        int c;
        scanf("%d", &c);
        scanf(" %s %c %s", p.nome, &p.sexo, p.nascimento);

        if (ruas[idx].casas[c].qtd < 4) {
            ruas[idx].casas[c].pessoas[
                ruas[idx].casas[c].qtd
            ] = p;
            ruas[idx].casas[c].qtd++;
        }

    } else if (tipo == 'e') {
        int e, a, apt;
        scanf("%d %d %d", &e, &a, &apt);
        scanf(" %s %c %s", p.nome, &p.sexo, p.nascimento);

        if (ruas[idx].predios[e].apt[a][apt].qtd < 4) {
            ruas[idx].predios[e].apt[a][apt].pessoas[
                ruas[idx].predios[e].apt[a][apt].qtd
            ] = p;
            ruas[idx].predios[e].apt[a][apt].qtd++;
        }
    }
}

/* Busca */
void buscar() {
    char nome[50], nomeRua[50];
    scanf(" %s", nome);
    scanf(" %[^\n]", nomeRua);

    int idx = buscarRua(nomeRua);
    int achou = 0;

    if (idx != -1) {

        /* Casas */
        for (int c = 1; c <= 50; c++) {
            for (int i = 0; i < ruas[idx].casas[c].qtd; i++) {
                if (strcmp(ruas[idx].casas[c].pessoas[i].nome, nome) == 0) {
                    printf("Casa: %d | Sexo: %c | Nascimento: %s\n",
                           c,
                           ruas[idx].casas[c].pessoas[i].sexo,
                           ruas[idx].casas[c].pessoas[i].nascimento);
                    achou++;
                }
            }
        }

        /* Prédios */
        for (int e = 1; e <= 10; e++)
            for (int a = 1; a <= 20; a++)
                for (int ap = 1; ap <= 2; ap++)
                    for (int i = 0; i < ruas[idx].predios[e].apt[a][ap].qtd; i++) {
                        if (strcmp(ruas[idx].predios[e].apt[a][ap].pessoas[i].nome, nome) == 0) {
                            printf("Edificio: %d | Andar: %d | Numero do apt.: %d | Sexo: %c | Nascimento: %s\n",
                                   e, a, ap,
                                   ruas[idx].predios[e].apt[a][ap].pessoas[i].sexo,
                                   ruas[idx].predios[e].apt[a][ap].pessoas[i].nascimento);
                            achou++;
                        }
                    }
    }

    if (achou == 0) {
        printf("Sem dados de \"%s\" em \"%s\"!\n", nome, nomeRua);
    } else {
        printf("Foram encontradas %d instancias de pessoas chamadas \"%s\" em \"%s\", relatadas acima.\n",
               achou, nome, nomeRua);
    }
}

int main() {
    int op;

    while (1) {
        scanf("%d", &op);

        if (op == 1) {
            inserir();
        } else if (op == 2) {
            buscar();
        } else if (op == 3) {
            printf("O programa sera fechado, obrigado por fazer uso dele. Lembre-se de evitar a fadiga!\n");
            break;
        } else {
            printf("Opcao invalida. Por favor, digite uma opcao valida.\n");
        }
    }

    return 0;
}