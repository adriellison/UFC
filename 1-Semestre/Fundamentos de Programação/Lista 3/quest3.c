#include <stdio.h>
int main(){
	int i, soma = 0, num ;
	for(i = 1; i <= 4; i ++){
		scanf("%d", &num);
		if(num % 2 == 0){
			soma = soma + num;
		}
	}
	printf("Soma = %d", soma);
}
