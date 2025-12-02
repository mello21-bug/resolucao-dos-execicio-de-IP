#include <stdio.h>
int main() {
    int v[10], N;
    scanf("%d", &N);
    for (int i=1; i<=10; i++) {
        v[i]= N*i;
        printf("%d\n", v[i]);
    }
    return 0;
}