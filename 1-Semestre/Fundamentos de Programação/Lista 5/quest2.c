#include <stdio.h>
int main(){
	//int n = 6;
	int n, i, j, cont = 0;
	printf("Digite o numero N para a contrucao do Triangulo de Floyd:\n");
	scanf("%d", &n);
	printf("\n");
	for(i = 1; i <= n; i++){
		for(j = 1; j <= i; j++){
			cont++;
			printf("%d", cont);
		}
	printf("\n");
	}
	return 0;
}
