#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int matriz[100][100], i = 0, j = 0, soma = 0;
    srand(time(NULL));
    for(i = 0; i < 100; i++){
        for(j = 0; j < 100; j++){
            matriz[i][j] = rand()%100;
            if (j>i){
                soma += matriz[i][j];
            }
        }
    }

    for(i = 0; i < 100; i++){
        for(j = 0; j < 100; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("%d", soma);
}
// 00 01 02 03 04
// 100 11 12 13 14
// 20 21 22 23 24
// 30 31 32 33 34
// 40 41 42 43 44
