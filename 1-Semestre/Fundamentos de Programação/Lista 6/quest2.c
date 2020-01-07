#include <stdio.h>
int main(){
    int vec[15], i, x, y;
    printf("Inserir 15 valores\n");
    for(i = 0; i < 15; i++){
        printf("%d) Insira um valor: ", i + 1);
        scanf("%d", &vec[i]);
    }
    printf("Digite o valor de X: ");
    scanf("%d", &x);
    printf("Digite o valor de Y: ");
    scanf("%d", &y);
    printf("vec[%d] + vec[%d] = vec[%d]", vec[x], vec[y], vec[x] + vec[y]);
}
