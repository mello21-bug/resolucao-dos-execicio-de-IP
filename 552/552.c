#include <stdio.h>

int mdc(int a, int b) {
    if (b == 0)
        return a;
    return mdc(b, a % b);
}

int main() {
    int N;
    int a, b;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d %d", &a, &b);
        printf("MDC(%d,%d) = %d\n", a, b, mdc(a, b));
    }

    return 0;
}
