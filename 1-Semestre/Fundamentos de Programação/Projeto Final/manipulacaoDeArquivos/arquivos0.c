#include <stdio.h>
int main(){

	FILE *arq;

	//escrever no arquivo
	//arq = fopen("bd.and", "w");
	//fprintf(arq, "Teste3.\nolá");
	//fprintf(arq, "\nTeste3.ola");
	//fclose(arq);

	//ler todo o arquivo
	//arq = fopen("bd.and", "r");
	//char texto[100];
	//while(fgets(texto, 100, arq) != NULL){
	//	printf("%s", texto);
	//}
	//fclose(arq);

	//ler apenas uma linha
	//arq = fopen("bd.and", "r");
	//char frase[100];
	//fgets(frase, 100, arq);
	//printf("%s", frase);
	//fechar arquivo em seguranca
	//fclose(arq);

	//ler apenas uma palavra
	arq = fopen("bd.and", "r");
	char c[100];
	fread(arq, "%s", c);
	fwrite("%s", c);
	//fechar arquivo em seguranca
	fclose(arq);
	return 0;
}
