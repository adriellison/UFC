#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int modulo(int x){
    if(x > 0){
        return x;
    }
    else{
        return -x;
    }
}
int main(){
    int matriz[10][10], i = 0, j = 0, max = 0;
    srand(time(NULL));
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            matriz[i][j] = rand()%100;
        }
    }
    printf("Original\n");
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    // Modificada
    for(j = 0; j < 10; j++){
        if(modulo(matriz[i][j]) > max){
            max = modulo(matriz[i][j]);
        }
    }
    for(j = 0; j < 10; j++){
        matriz[i][j] -= max;
    }

    printf("Modificada\n");
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}
