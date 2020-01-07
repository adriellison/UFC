#include <stdio.h>
int main(){
	int antecessor = 0, termo1, razao, num;

	printf("Digite o primeiro termo: ");
	scanf("%d", &termo1);
	printf("Digite a razao: ");
	scanf("%d", &razao);
	printf("Digite o numero de termos: ");
	scanf("%d", &num);

	antecessor = termo1 + (num - 1) * razao;
	printf("P.A. = %d", antecessor);
	return 0;
}
