#include <stdio.h>
int main(){
	printf("Salvar: [s] sim - [n] nao\n");
	scanf("%s", &escolha);

	switch(escolha){
		case ("s"):
			printf("Salvo");
		case ("n"):
			opcao1 = false;
		default:
			printf("Opcao invalida!");

}
