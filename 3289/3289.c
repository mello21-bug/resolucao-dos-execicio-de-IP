#include <stdio.h>

void converteHora(int h, int m) {
    h = h % 24;

    if (h == 0) {
        printf("0:%02d A.M\n", m);
    }
    else if (h < 12) {
        printf("%d:%02d A.M\n", h, m);
    }
    else if (h == 12) {
        printf("12:%02d P.M\n", m);
    }
    else {
        printf("%d:%02d P.M\n", h - 12, m);
    }
}

int main() {
    int h, m;

    while (1) {
        scanf("%d:%d", &h, &m);

        if (h == -1) {
            break;
        }

        converteHora(h, m);
    }

    return 0;
}
