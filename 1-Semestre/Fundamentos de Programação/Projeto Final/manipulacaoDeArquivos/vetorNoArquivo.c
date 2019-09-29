#include <stdio.h>
int main(){
	FILE *arq;

	char contato[2][50];
	printf("Nome: ");
	scanf("%[^\n]s", &contato[0]);
	printf("Telefone: ");
	scanf("%s", &contato[1]);
	printf("Email: ");
	scanf("%s", &contato[2]);

	arq = fopen("bd.and", "a");
	//char contato[] = "Segunda linha\n";
	//char contato[] = "%s - %s - %s", contato[0], contato[1], contato[2];
	//fputs(contato, arq);
	fprintf(arq, "%s - %s - %s\n", contato[0], contato[1], contato[2]);
	fclose(arq);
	//printf("Nome: %s - Telefone: %s - Email: %s", contato[0], contato[1], contato[2]);
}
