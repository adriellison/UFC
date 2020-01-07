#include <stdio.h>
void recebe(int vec[]){
    int i;
    for(i = 0; i  < 10; i++){
        printf("%d) Insira um valor: ", i);
        scanf("%d", &vec[i]);
    }
}
void imprimir(int vec[]){
    int i;
    for(i = 9; i >= 0; i--){
        printf("vetor: %d\n", vec[i]);
    }
}
int main(){
    int vec[10];
    printf("Inserir 10 valores\n");
    recebe(vec);
    imprimir(vec);


    // for(i = 9; i >= 0; i--){
    //     printf("%d) Insira um valor: ", i);
    //     scanf("%d", &vec[i]);
    // }
    // for(i = 0; i  < 10; i++){
    //     printf("vetor: %d\n", vec[i]);
    // }
}
