#include <stdio.h>
int main(){
	int i,num, soma;
	soma = 0;
	for(i = 1; i <= 10; i++){
		printf("[%d] Digite um valor: ", i);
		scanf("%d", &num);
		soma += num;
	}
	printf("\n%d\n", soma);
}
