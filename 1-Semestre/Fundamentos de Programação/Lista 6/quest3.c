#include <stdio.h>
int main(){
    int vec[15], i, par = 0;
    printf("Inserir 15 valores\n");
    for(i = 0; i < 15; i++){
        printf("%d) Insira um valor: ", i);
        scanf("%d", &vec[i]);
        if(vec[i] % 2 == 0){
            par += 1;
        }
    }
    printf("%d pares", par);
}
