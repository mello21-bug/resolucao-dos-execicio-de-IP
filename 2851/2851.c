#include <stdio.h>

int main() {
    int v[10];

    printf("Digite os 10 numeros inteiros:\n");

   
    for (int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    printf("Numeros pares na ordem inversa:\n");

   
    for (int i = 9; i >= 0; i--) {
        if (v[i] % 2 == 0) {
            printf("%d ", v[i]);
        }
    }

    return 0;
}
