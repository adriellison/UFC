#include <stdio.h>
#include <math.h>
int main(){
	int antecessor, termo1, razao, num;

	printf("Digite o primeiro termo: ");
	scanf("%d", &termo1);
	printf("Digite a razao: ");
	scanf("%d", &razao);
	printf("Digite o numero de termos: ");
	scanf("%d", &num);

	antecessor = termo1 * pow(razao, num - 1);
	printf("P.G. = %d", antecessor);
	return 0;
}
