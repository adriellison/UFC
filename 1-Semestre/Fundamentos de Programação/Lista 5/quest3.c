#include <stdio.h>
int main(){
	int i, num, soma = 0;

	printf("Digite um numero: ");
	scanf("%d", &num);

	for(i = 1; i < num; i++){
		if(num % i == 0){
			soma += i;
		}
	}
	if(soma == num){
		printf("O numero %d e perfeito\n", num);
	}
	else{
		printf("O numero %d nao e perfeito\n", num);
	}
	return 0;
}
