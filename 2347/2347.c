#include <stdio.h>

void imprime(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", i);
            if (j < i)
                printf("-");
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);

    imprime(n);

    return 0;
}
