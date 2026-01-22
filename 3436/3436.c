#include <stdio.h>

#define PI 3.14159265358979323846

double areaCirculo(double raio) {
    return PI * raio * raio;
}

double perimetroCirculo(double raio) {
    return 2.0 * PI * raio;
}

int main() {
    double raio;

    scanf("%lf", &raio);

    printf("%.5lf\n", areaCirculo(raio));
    printf("%.5lf\n", perimetroCirculo(raio));

    return 0;
}
