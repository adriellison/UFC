#include <stdio.h>
int main(){
	char contato[2][50];
	printf("Nome: ");
	scanf("%s", &contato[0]);
	printf("Telefone: ");
	scanf("%s", &contato[1]);
	printf("Email: ");
	scanf("%s", &contato[2]);
	printf("Nome: %s - Telefone: %s - Email: %s", contato[0], contato[1], contato[2]);
	//printf("%s", contato);
}
