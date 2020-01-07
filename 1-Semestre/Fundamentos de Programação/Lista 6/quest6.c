#include <stdio.h>
int main(){
    int vec[10], i, soma = 0, burros;
    float media;
    printf("Inserir notas\n");
    for(i = 0; i < 10; i++){
        printf("Aluno %d: ", i + 1);
        scanf("%d", &vec[i]);
        soma += vec[i];
    }
    media = soma / 10;
    for(i = 0; i < 10; i++){
        if(vec[i] < media){
            burros += 1;
        }
    }
    printf("Alunos com nota menor que a media: %d", burros);
}
