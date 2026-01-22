#include <stdio.h>

int calculaY(int x) {
    return (x - 1) * (x - 1);
}

int main() {
    int x;
    scanf("%d", &x);

    int y = calculaY(x);
    printf("%d\n", y);

    return 0;
}
