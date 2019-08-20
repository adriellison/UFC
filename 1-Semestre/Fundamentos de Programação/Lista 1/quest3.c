#include <stdio.h>
#include <stdlib.h>
//Exercício 3. Escreva um programa que leia 2 números e os imprima na ordem contrária a que foram digitados.
int main(){
	int num1, num2;
	scanf("%d", &num1);
	scanf("%d", &num2);
	printf("%d\n%d", num2, num1);
}