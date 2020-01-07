#include <stdio.h>
int main(){
    int num1 = 125;
    printf("%d\n", num1 / 10); // result = 2
    printf("%d\n", num1 % 10); // result = 5
}
void recebe(int vec[], int n){
    int i;
    while(i < 100){
        if(i % 7 != 0 || i % 10 != 0){
            vec[i] = i;
            i++;
        }
    }
}
void imprimir(int vec[], int n){
    int i;
    for(i = 100; i >= 0; i--){
        printf("vetor: %d\n", vec[i]);
    }
}
int main(){
    int vec[100], i = 0;
    imprimir(vec, 100);
}
