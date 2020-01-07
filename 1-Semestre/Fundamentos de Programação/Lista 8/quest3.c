#include <stdio.h>
int main(){
    int matriz[5][5], i = 0, j = 0;
    for(i=0 ; i < 5 ; i++){
        for(j=0; j<5 ; j++){
            matriz[i][j] = i*j;
            // printf("%d\n",matriz[i][j]);
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
		          printf("%d\t",matriz[i][j]);
        }
        printf("\n");
	}
}
