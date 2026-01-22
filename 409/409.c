#include <stdio.h>

int SerieMiguelito(int n) {
    if (n == 1)
        return 3;

    if (n % 2 == 0)
        return SerieMiguelito(n - 1) + 4;
    else
        return SerieMiguelito(n - 1) + 1;
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%d\n", SerieMiguelito(n));
    return 0;
}
