#include <stdio.h>
#include <string.h>
int main(){

char nome1[100];
char nome2[100];

printf("Digite uma frase:\n");
gets(nome1);

printf("\nDigite outra frase:\n");
gets(nome2);

strcat(nome1,nome2);

printf("\n%s\n",nome1);

return 0;
}
