#include <stdio.h>

int main() {
    int n;
    int v[200000]; 
    long long inversoes = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

   
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (v[i] > v[j]) {
                inversoes++;
            }
        }
    }

    printf("%lld\n", inversoes);

    return 0;
}
