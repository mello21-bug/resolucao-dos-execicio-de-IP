#include <stdio.h>

int quantidade(int n) {
    if (n < 10)
        return 1;
    return 1 + quantidade(n / 10);
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%d\n", quantidade(n));
    return 0;
}
