#include <stdio.h>
void recebe(int vec[],int n){
    int i;
    for(i = 0; i <=n; i++){
        printf("%d) Insira um valor: ", i);
        scanf("%d", &vec[i]);
    }
}
void imprimir(int vec[], int n){
    int i;
    for(i = 0; i <= n; i++){
        printf("vetor: %d\n", vec[i]);
    }
}
int main(){
    int vec[5],vec2[5],i,j;
    recebe(vec, 5);
    for(i=0; i<=5; i++){
        for(j=0; j<=5; j++){
            if(vec[i] != vec[j+1]){
                vec2[j-i] = vec[i];

            }
        }
    }
    imprimir(vec2, 5);
}
