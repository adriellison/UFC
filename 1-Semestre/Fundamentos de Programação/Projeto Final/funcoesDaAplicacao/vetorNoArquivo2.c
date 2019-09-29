#include <stdio.h>
int main(){

	char contato[3][50];
	printf("Nome: ");
	scanf("%[^\n]s", &contato[0]);
	printf("Telefone: ");
	scanf("%[^\n]s", &contato[1]);
	printf("Email: ");
	scanf("%s", &contato[2]);

	char escolha;
	printf("Salvar: [s] sim - [n] nao\n");
	scanf("%s", &escolha);

	if(escolha == "s" || escolha == "S"){
		FILE *arq;
		arq = fopen("bd.and", "a");
		fprintf(arq, "%s - %s - %s\n", contato[0], contato[1], contato[2]);
		fclose(arq);
	}else if(escolha == "n" || escolha == "N"){
		printf("Blz entao");
	}else{
		printf("Opcao invalida!")
	}

}
