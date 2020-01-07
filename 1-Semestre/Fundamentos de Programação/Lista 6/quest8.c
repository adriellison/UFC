#include <stdio.h>
void recebe(int vec[], int n){
    int i;
    for(i = 0; i  < n; i++){
        printf("%d) Insira um valor: ", i);
        scanf("%d", &vec[i]);
    }
}
void imprimir(int vec[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("vetor: %d\n", vec[i]);
    }
}
int main(){
    int a[10], b[10], c[10], i;
    printf("Inserir valores do vetor a\n");
    recebe(a, 10);
    printf("Inserir valores do vetor b\n");
    recebe(b, 10);
    for(i = 0; i < 10; i++){
        c[i] = a[i] - b[i];
    }
    imprimir(c, 10);
}
