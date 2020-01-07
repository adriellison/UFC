#include <stdio.h>
int main(){
	int i, num, cont = 0;

	printf("Numero: ");
	scanf("%d", &num);
	for (i = 1; i <= num; i++){
		if(num % i == 0){
			cont++;
		}
	}
	if(cont == 2){
		printf("O %d e primo", num);
	}
	else{
		printf("O %d NAO e primo", num);
	}
	return 0;
}
