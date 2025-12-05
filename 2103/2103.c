#include <stdio.h>

int main() {

    int luke, vader;
    scanf("%d %d", &luke, &vader);

    int A[3][3], B[3][3];
    int i, j;

    
    while (1) {

        
        if (scanf("%d %d %d", &A[0][0], &A[0][1], &A[0][2]) != 3)
            break; 

        for (i = 1; i < 3; i++)
            scanf("%d %d %d", &A[i][0], &A[i][1], &A[i][2]);

        
        scanf("%d %d %d", &B[0][0], &B[0][1], &B[0][2]);
        for (i = 1; i < 3; i++)
            scanf("%d %d %d", &B[i][0], &B[i][1], &B[i][2]);


        
        int validA = 1, validB = 1;
        int diagA = -1, diagB = -1; 
       
        int princ = 1, sec = 1;
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {

                if (i == j) { 
                    if (A[i][j] != 1) princ = 0;
                }
                else if (i + j == 2) { 
                    if (A[i][j] != 1) sec = 0;
                }
                else { 
                    if (A[i][j] != 0) princ = sec = 0;
                }
            }
        }
        if (princ) diagA = 0;
        else if (sec) diagA = 1;
        else validA = 0;

        
        princ = 1; sec = 1;
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {

                if (i == j) { 
                    if (B[i][j] != 1) princ = 0;
                }
                else if (i + j == 2) {
                    if (B[i][j] != 1) sec = 0;
                }
                else {
                    if (B[i][j] != 0) princ = sec = 0;
                }
            }
        }
        if (princ) diagB = 0;
        else if (sec) diagB = 1;
        else validB = 0;


        
        if (validA && !validB) {
            vader -= 15;
        }
        else if (!validA && validB) {
            luke -= 15;
        }
        else if (validA && validB) {
            if (diagA == diagB) {
               
                luke -= 15;
                vader -= 15;
            }
            
        }

        if (luke <= 0 || vader <= 0)
            break; 
    }

    
    if (luke > vader)
        printf("Luke Skywalker venceu.\n");
    else if (vader > luke)
        printf("Darth Vader venceu.\n");
    else
        printf("Houve empate.\n");

    return 0;
}
