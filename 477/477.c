#include <stdio.h>

struct Personagem {
    int forca;
    int inteligencia;
    int destreza;
    int furtividade;
    int peso;
};

int main() {
    struct Personagem p;

    scanf("%d", &p.forca);
    scanf("%d", &p.inteligencia);
    scanf("%d", &p.destreza);
    scanf("%d", &p.furtividade);
    scanf("%d", &p.peso);

    if (p.forca > 10 &&
        p.inteligencia < 5 &&
        p.destreza < 5 &&
        p.furtividade < 5 &&
        p.peso > 5) {

        printf("Orc\n");

    }
    else if (p.forca > 5 &&
             p.inteligencia > 5 &&
             p.destreza > 5 &&
             p.furtividade > 5 &&
             p.peso < 5) {

        printf("Paladin\n");

    }
    else if (p.forca < 5 &&
             p.inteligencia > 5 &&
             p.furtividade > 5 &&
             p.peso < 5) {

        printf("Mage\n");

    }
    else if (p.forca > 5 &&
             p.destreza > 5 &&
             p.peso > 5) {

        printf("Knight\n");
    }

    return 0;
}
