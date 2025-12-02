#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int v[10000];
    int i;

    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    int jQtd = 0, mQtd = 0;
    int somaPar = 0, somaImpar = 0;

   
    int usados[13001] = {0};

    for (i = 0; i < n; i++) {
        int x = v[i];

        if (x % 2 == 0) jQtd++;
        else mQtd++;

        if (!usados[x]) {  
            if (x % 2 == 0) somaPar += x;
            else somaImpar += x;
            usados[x] = 1;  
        }
    }

    printf("%d\n", jQtd);
    printf("%d\n", mQtd);

    if (somaPar > somaImpar) printf("%d\n", somaPar);
    else printf("%d\n", somaImpar);

    return 0;
}
