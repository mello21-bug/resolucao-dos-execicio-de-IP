#include <stdio.h>
int main() {
   int v[3], maior, menor;
    for(int i=0; i<3; i++) {
         scanf("%d", &v[i]);
    }

    maior= v[0];
    menor= v[0];
    
    for (int i=0; i<3; i++) {
        if (v[i]>maior) {
            maior=v[i];
        }

        if (v[i]<menor) {
            menor=v[i];
        }

        if (v[i]>menor && v[i]<maior) {
            printf("%d\n", v[i]);
        }
    }
}