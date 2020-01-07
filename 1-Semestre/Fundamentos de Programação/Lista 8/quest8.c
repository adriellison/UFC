#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int matriz[5][5], i = 0, j = 0, soma = 0;
    srand(time(NULL));
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            matriz[i][j] = rand()%100;
        }
    }

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("%d\t", matriz[j][i]);
        }
        printf("\n");
    }
}
