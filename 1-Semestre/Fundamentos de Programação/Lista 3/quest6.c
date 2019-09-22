#include <stdio.h>

int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if(a + b >= c && a + c >= b && b + c >= a){
		printf("O numeros sao os lados de um triangulo.");
	}else{
		printf("os numeros nao formam um triangulo.");
	}
}
