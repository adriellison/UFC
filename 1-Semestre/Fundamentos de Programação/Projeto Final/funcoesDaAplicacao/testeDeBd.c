#include <stdio.h>
#include <stdlib.h>
int main(){

	FILE *arq;
	arq = fopen("/bd/contatos.and", "r");
	if(arq == NULL){
		printf("Nao foi possivel localizar o banco de dados.\n");
		system("pause");
	}
	else{
		printf("O banco de dados esta pronto.\n");
	}
}
