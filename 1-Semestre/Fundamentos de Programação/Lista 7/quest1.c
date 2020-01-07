#include <stdio.h>
void escrever(char nome[]){
    printf("Digite um nome: ");
    gets(nome);
}
void imprimir(char nome[]){
    int i;
    for(i = 0; nome[i] != '\0'; i++){
        if(i <= 5){
            printf("%d - %c\n", i, nome[i]);
        }
    }
}
int main(){
    char nome[25];
    escrever(nome);
    imprimir(nome);
}
