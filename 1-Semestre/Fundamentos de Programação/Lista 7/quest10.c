#include <stdio.h>
#include <string.h>
int main(){

int cont(char str[]);
char str[100];

printf("Digite uma frase:\n");
gets(str);

cont(str);

printf("\n%d\n",cont(str));
return 0;
}

int cont(char str[]){
int size = 0;
    while(str[size] != '\0'){
        size++;
    }
    return size;
}
