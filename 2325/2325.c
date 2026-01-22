#include <stdio.h>

int ehDivisivel(int A, int B) {
    if (A % B == 0) {
        return 1;   // verdadeiro
    }
    else {
        return 0;   // falso
    }
}

int main() {
    int A, B;

    scanf("%d", &A);
    scanf("%d", &B);

    if (ehDivisivel(A, B)) {
        printf("divisivel\n");
    } else {
        printf("nao divisivel\n");
    }

    return 0;
}
