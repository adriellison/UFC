#include <stdio.h>
#include <string.h>
int main(){

char nome1[31];
char nome2[31];
int aux;

printf("Digite uma frase:\n");
gets(nome1);

printf("\nDigite outra frase:\n");
gets(nome2);

aux = strcmp(nome1,nome2);
if(aux == 0)printf("\nAs frases sao iguais\n");
else printf("As frases sao diferentes\n");

return 0;
}
