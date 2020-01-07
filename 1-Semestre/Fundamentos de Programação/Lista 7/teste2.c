#include<stdio.h>
#include<conio.h>
#include<string.h>
void escrever(char nome[]){
    printf("Digite um nome: ");
    gets(nome);
}
void InvertePalavras(char *str){
    register unsigned char qtdePalavras = 1, i, j, k = 0, l, aux;

    for(l = 0; str[l] != '\0'; l++)
        qtdePalavras += (str[l] == ' ') ? 1 : 0;

    do{
        if(qtdePalavras == 1){
            for(j = k, --l; l > j; l--, j++)
                aux = str[j], str[j] = str[l], str[l] = aux;
        }else{
            for(j = i = k; str[i] != ' '; i++);
            k = i + 1;
            for(--i; j < i; i--, j++)
                aux = str[j], str[j] = str[i], str[i] = aux;
        }
    }while(--qtdePalavras);
}
int main(){
    char nome[25];
    escrever(nome);
    imprimir(nome);
}
