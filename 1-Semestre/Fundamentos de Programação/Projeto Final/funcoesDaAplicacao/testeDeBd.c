#include <stdio.h>
#include <stdlib.h>
int main(){

	FILE *arq;
	arq = fopen("and", "r");
	if(arq == NULL){
		printf("Nao foi possivel localizar o banco de dados.\n");
		system("dir");
		system("pause");
		system("cls");
	}
}
