#include <stdio.h>

int main() {
    int N, L, C, q = 0;
    scanf("%d", &N);
    for (int i=0; i<N; i++) {
        scanf("%d %d", &L, &C);
        if(L>C) {
            q += C;
        } 
    }
    printf("%d\n", q);
    return 0;
}