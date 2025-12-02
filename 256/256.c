#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[1000], b[1000];   

    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

   
    for (int i = 0; i < n; i++) {
        printf("%d\n", a[i]);
        printf("%d\n", b[i]);
    }

    return 0;
}
