#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int A[4][4], B[4][4], C[4][4], i, j;
    srand(time(NULL));
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            A[i][j] = rand()%100;
        }
    }
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            B[i][j] = rand()%100;
        }
    }
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%d\t", C[i][j]);
        }
    printf("\n");
    }
}
