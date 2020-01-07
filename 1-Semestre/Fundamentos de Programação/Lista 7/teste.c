#include <stdio.h>
void escrever(char nome[]){
    printf("Digite um nome: ");
    scanf("%[^\n]s", &nome);
}
void imprimir(char nome[]){
    int i, tam = 0;
    for(i = 0; nome[i] != '\0'; i++){
        printf("%d - %c\n",nome[i]);
    }
}
int main(){
    char nome[25];
    escrever(nome);
    imprimir(nome);
}
