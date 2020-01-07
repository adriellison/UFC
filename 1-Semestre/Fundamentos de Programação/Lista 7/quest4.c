#include <stdio.h>
void escrever(char nome[]){
    printf("Digite um nome: ");
    gets(nome);
}
void contar(char nome[]){
    int i, quant = 0;
    for(i = 0; nome[i] != '\0'; i++){
        if(nome[i] == '1'){
            quant += 1;
        }
    }
    printf("Tem %d digitos 1's.", quant);
}
int main(){
    char nome[25];
    escrever(nome);
    contar(nome);
}
