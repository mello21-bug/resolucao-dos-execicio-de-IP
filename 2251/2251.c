#include <stdio.h>

int main() {
    int n, d;
    int v[10000];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    scanf("%d", &d);

    
    d = d % 10;

    for (int i = 0; i < n; i++) {
        int x = v[i] + d;

        if (x > 9) x = x % 10;
        if (x < 0) x = (x % 10 + 10) % 10; 

        printf("%d", x);

        if (i < n - 1) printf(" ");
    }

    printf("\n");

    return 0;
}
