#include <stdio.h>
int main(){
    int vec[15], i, impar = 0;
    printf("Inserir 15 valores\n");
    for(i = 0; i < 15; i++){
        printf("%d) Insira um valor: ", i);
        scanf("%d", &vec[i]);
        if(vec[i] % 2 != 0){
            impar += 1;
        }
    }
    printf("%d impares", impar);
}
