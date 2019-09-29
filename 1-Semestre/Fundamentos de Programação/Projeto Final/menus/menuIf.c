#include <stdio.h>
#include <string.h>

int main(){
	char escolha;
	printf("Salvar: [s] sim - [n] nao\n");
	scanf("%s", &escolha);

	if(strcmp(escolha, "s")){
		printf("Salvo");
	}else{
		printf("Opcao invalida!");
	}

}
