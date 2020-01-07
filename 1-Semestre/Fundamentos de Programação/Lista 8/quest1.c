#include <stdio.h>
int main(){
    int matriz[4][4], i, j, cont = 0;

    for(i=0; i < 4; i++){
        for(j=0; j < 4; j++){
            printf("\nElemento[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i=0; i < 4; i++){
        for(j=0; j < 4; j++){
            if(matriz[i][j] > 10){
                cont += 1;
            }
        }
    }
    printf("\nExistem %d valores maiores que 10", cont);
}
