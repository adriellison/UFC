#include <stdio.h>
#include <stdlib.h>
int main(){

	FILE *arq;
	arq = fopen("bd.and", "r");
	if(arq == NULL){
		printf("Nao foi possivel localizar o banco de dados.\n");
		system("dir");
		system("pause");
		system("cls");
	}
	fprintf(arq, "Teste3.\nolá");
	fprintf(arq, "\nTeste3.ola");
	fclose(arq);
	return 0;
}
