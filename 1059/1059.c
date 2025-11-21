#include<stdio.h>
//Vesão com for
int main(){
	int par;
	for (par=2; par <= 100; par = par+2){
		printf("%d\n", par);
	}
	return 0;
}


#include <stdio.h>
//Vesão com while
int main() {
    int i = 2;

    while (i <= 100) {
        printf("%d\n", i);
        i += 2;
    }

    return 0;
}


#include <stdio.h>
//Vesão com do-while
int main() {
    int i = 2;

    do {
        printf("%d\n", i);
        i += 2;
    } while (i <= 100);

    return 0;
}
