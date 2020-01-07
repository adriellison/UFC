#include <stdio.h>
void escrever(char nome[]){
    printf("Digite um nome: ");
    // scanf("%s", nome);
    gets(nome);
}
void imprimir(char nome[]){
    printf("O nome salvo foi: %s", nome);
}
int main(){
    char nome[25];
    escrever(nome);
    imprimir(nome);
}
