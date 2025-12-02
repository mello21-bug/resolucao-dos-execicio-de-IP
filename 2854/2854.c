#include <stdio.h>
 int main() {
    int IP[45], LP[30];

printf("Digite as matriculas dos alunos de Introducao a Programacao:\n");

for (int i=0; i<45; i++) {
    scanf("%d", &IP[i]);
 }

printf("Digite as matriculas dos alunos de Laboratorio de Programacao:\n");
 for (int j=0; j<30; j++) {
    scanf("%d", &LP[j]);
 }

 printf("Alunos matriculados em ambas as disciplinas:\n");

 for (int i=0; i<45; i++) {
    for (int j=0; j<30; j++) {
        if (IP[i] == LP[j]) {
            printf("%d ", IP[i]);
        }
    }
 }

return 0;
}

