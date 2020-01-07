#include <stdio.h>
int main(){
    int vec[20], i, par = 0;
    printf("Inserir 15 valores\n");
    for(i = 0; i < 20; i++){
        printf("%d) Insira um valor: ", i);
        scanf("%d", &vec[i]);
        if(vec[i] <= 0){
            vec[i] = 0;
        }
    }
    for(i = 0; i  < 20; i++){
        printf("vetor: %d\n", vec[i]);
    }
}
