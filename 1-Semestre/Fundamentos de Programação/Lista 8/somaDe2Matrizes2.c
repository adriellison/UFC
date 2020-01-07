#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
int a[4][4], b[4][4], c[4][4], i, j;
    srand(time(NULL));
    for(i = 0;i< 4; i++){
        for(j =0; j< 4;j++){
            a[i][j]=rand()%100;
        }
    }
    for(i = 0;i< 4; i++){
        for(j =0; j< 4;j++){
            b[i][j]=rand()%100;
        }
    }
    for(i = 0;i< 4; i++){
        for(j =0; j< 4;j++){
        c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i = 0;i< 4; i++){
        for(j =0; j< 4;j++){
        printf("[%d]\t", c[i][j]);
        }
        printf("\n");
    }
}
