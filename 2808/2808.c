#include <stdio.h>

int main() {
    char c1, c2;
    int l1, l2;

    // lê no formato a1 b3
    scanf("%c%d %c%d", &c1, &l1, &c2, &l2);

    int dx = (c1 - 'a') - (c2 - 'a');
    if (dx < 0) dx = -dx;

    int dy = l1 - l2;
    if (dy < 0) dy = -dy;

    if ((dx == 1 && dy == 2) || (dx == 2 && dy == 1))
        printf("VALIDO\n");
    else
        printf("INVALIDO\n");

    return 0;
}
