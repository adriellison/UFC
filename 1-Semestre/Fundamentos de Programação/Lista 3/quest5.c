#include <stdio.h>
int main(){
	int a, b, c, maior, meio, menor;
	scanf("%i %i %i", &a, &b, &c);
	if(a > b && a > c){
		if(b > c){
			maior = a;
			meio = b;
			menor = c;
		}else{
			maior = a;
			menor = c;
			meio = b;
		}
	}else if(b > a && b > c){
		if(a > c){
			meio = a;
			maior = b;
			menor = c;
		}else{
			menor = a;
			maior = b;
			meio = c;
		}
	}else{
		if(b > a){
			menor = a;
			meio = b;
			maior = c;
		}else{
			meio = a;
			menor = b;
			maior = c;
		}
	}
	printf("%i %i %i", menor, meio, maior);
}
