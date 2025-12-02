#include <stdio.h>
int main() {
    int v[101];

    for(int i=0; i<101; i++) {
        scanf("%d", &v[i]);
    }

    for (int i=0; i<100; i++) {
        if (v[i]==v[100]) {
            printf("%d\n", i);
        }
    }

}