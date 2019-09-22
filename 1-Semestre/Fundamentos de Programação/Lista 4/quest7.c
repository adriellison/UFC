#include <stdio.h>

void main(){
	int saque;
	int resto100, resto50, resto20, resto10, resto5, resto2, resto1;
	int nota100, nota50, nota20, nota10, nota5, nota2, nota1;

	printf("Digite o valor desejado.\n");
	scanf("%d", &saque);

	resto100 = saque % 100;
	resto50 = resto100 % 50;
	resto20 = resto50 % 20;
	resto10 = resto20 % 10;
	resto5 = resto10 % 5;
	resto2 = resto5 % 2;
	resto1 = resto2 % 1;

	nota100 = saque / 100;
	nota50 = resto100 / 50;
	nota20 = resto50 / 20;
	nota10 = resto20 / 10;
	nota5 = resto10 / 5;
	nota2 = resto5 / 2;
	nota1 = resto2 / 1;

		if(nota100>0){printf("%d notas de 100\n", nota100);}
		if(nota50>0){printf("%d notas de 50\n", nota50);}
		if(nota20>0){printf("%d notas de 20\n", nota20);}
		if(nota10>0){printf("%d notas de 10\n", nota10);}
		if(nota5>0){printf("%d notas de 5\n", nota5);}
		if(nota2>0){printf("%d notas de 2\n", nota2);}
		if(nota1>0){printf("%d notas de 1\n", nota1);}
}
