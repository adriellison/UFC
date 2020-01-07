#include <stdio.h>
int main(){
	//int n = 6;
	int n, i, j, cont = 0;
	printf("Digite o numero N para a contrucao do Triangulo de Floyd:\n");
	scanf("%d", &n);
	printf("\n");
	//primeiro for diz o numero de linhas
	for(i = 0; i <= n; i++){
		//segundo for valor do numero
		for(j = 1; j <= i; j++){
			cont++;
			printf(" %d ", cont);
		}
	printf("\n");
	}
	return 0;
}
