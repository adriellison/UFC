#include <stdio.h>
void escrever(char nome[]){
    printf("Digite um nome: ");
    gets(nome);
}
void tamanho(char nome[]){
    int i, tam = 0;
    for(i = 0; nome[i] != '\0'; i++){
        // printf("%d - %c\n", i, nome[i]);
        tam += 1;
    }
    printf("Comprimento da String: %d", tam);
}
int main(){
    char nome[25];
    escrever(nome);
    tamanho(nome);
}
