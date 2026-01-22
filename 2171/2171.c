#include <stdio.h>

int mod(int x, int y) {
    if (y == 0)
        return -1;

    if (x < 0)
        x = -x;
    if (y < 0)
        y = -y;

    if (x < y)
        return x;

    return mod(x - y, y);
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    printf("%d\n", mod(x, y));
    return 0;
}
