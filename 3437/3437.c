#include <stdio.h>

#define PI 3.14159265358979323846

void lerVetor(float v[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        scanf("%f", &v[i]);
    }
}

void grausParaRadianos(float graus[], float rad[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        rad[i] = graus[i] * PI / 180.0;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    float graus[n], radianos[n];

    lerVetor(graus, n);
    grausParaRadianos(graus, radianos, n);

    for (int i = 0; i < n; i++) {
        printf("%.5f\n", radianos[i]);
    }

    return 0;
}
