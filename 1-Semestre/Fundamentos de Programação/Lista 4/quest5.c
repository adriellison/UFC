#include <stdio.h>
int main(){
	int n, i, resul=0;
	printf("Digite um numero.\n");
	scanf("%d", &n);
	for(i=2; i<n ; i++){
		if(n % i == 0){
			resul++;
		}
	}
	if(resul == 0){
		printf("\n>> %d << e primo\n", n);
	}else{
		printf("\n>> %d << nao e primo\n", n);
	}
	return 0;
}
