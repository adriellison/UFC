#include <stdio.h>
int main(){
	FILE *arq;
	arq = fopen("bd.and", "a");

	//Adiciona mais conteudo no arquivo sem apagar o já existente
	fprintf(arq, "Primeira linha\n");

	//Adiciona um vetor de caracteres
	char contato[] = "Segunda linha\n";
	fputs(contato, arq);

	//Adiciona um caractere
	char caractere = '3';
	fputc(caractere, arq);

	fclose(arq);

	return 0;
}
