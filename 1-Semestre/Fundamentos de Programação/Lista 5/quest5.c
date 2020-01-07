#include <stdio.h>
int main(){
	int x, y, mdc, resto = 0;
	printf("Primeiro valor: ");
	scanf("%d", &x);
	printf("Segundo valor: ");
	scanf("%d", &y);

	while(y != 0){
		resto = x % y;
		x = y;
		y = resto;
	}
	mdc = x;
	printf("MDC = %d", mdc);
	return 0;
}
