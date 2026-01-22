#include <stdio.h>

void equacaoredx(int c, float e) {
    float a2, b2;

    a2 = (c / e) * (c / e);
    b2 = a2 - (c * c);

    printf("FOCOS EM X\n");
    printf("x^2/%.0f + y^2/%.0f = 1\n", a2, b2);
}

void equacaoredy(int c, float e) {
    float a2, b2;

    a2 = (c / e) * (c / e);
    b2 = a2 - (c * c);

    printf("FOCOS EM Y\n");
    printf("x^2/%.0f + y^2/%.0f = 1\n", b2, a2);
}

int main() {
    int x1, y1, x2, y2;
    float e;
    int c;

    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    scanf("%f", &e);

    if (y1 == 0 && y2 == 0) {
        c = x2 > 0 ? x2 : -x2;
        equacaoredx(c, e);
    } else {
        c = y2 > 0 ? y2 : -y2;
        equacaoredy(c, e);
    }

    return 0;
}
