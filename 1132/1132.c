#include <stdio.h>

int main() {
   
    int X, Y;
    int soma=0;

    scanf("%d%d", &X, &Y);

    if(X>Y) {
        int temp=X;
        X=Y;
        Y=temp;
    }

    for(int i=X; i<=Y; i++) {

        if(i%13!=0){
            soma+=i;
        }
    }

    printf("%d\n", soma);
    

    return 0;
}
