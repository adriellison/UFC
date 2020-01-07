#include <stdio.h>
int main(){
    int vec[10], i, j;
    printf("Inserir notas\n");
    for(i = 0; i < 10; i++){
        printf(" %d) Digite um valor: ", i + 1);
        scanf("%d", &vec[i]);
    }
    for(i = 0; i < 10; i++){
        for(j = i+1; j < 10; j++){
            if(vec[i] == vec[j]){
                printf("%d\n", vec[i]);
            }
        }
    }
}
