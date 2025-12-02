#include <stdio.h>
 int main() {
     int N, v[1000], K=0;
        scanf("%d", &N);
        for(int i=0; i<1000; i++) {
            scanf("%d", &v[i]);
            if (v[i]==-1) {
                break;
            }
            if(v[i]==N) {
                K++;
            }
 }
   printf("%d appeared %d times\n", N, K);
     return 0;
}