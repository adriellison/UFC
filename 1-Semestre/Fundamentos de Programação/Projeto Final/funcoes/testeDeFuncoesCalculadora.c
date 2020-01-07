#include <stdio.h>
int main(){
	// variaveis
	int num1, num2; // numeros recebidos
	int resultado; // resultado de cada operacao
	int escolher; // escolher operacao

	// Funcoes do programa
	int insiraNumero();
	int somar();
	int subtrair();
	int multiplicar();
	int dividir();

	//chamada de funcoes
	insiraNumero();
	somar();
	subtrair();
	multiplicar();
	dividir();
}
int insiraNumero(int num1, int num2){
	printf("Digite  o primeiro valor: ");
	scanf("%d", &num1);
	printf("Digite  o segundo valor: ");
	scanf("%d", &num2);
	return num1, num2;
}
int somar(int num1, int num2, int resultado){
	resultado = num1 + num2;
	printf("\n\t%d + %d = %d", num1, num2, resultado);
	// return resultado;
}
int subtrair(int num1, int num2, int resultado){
	resultado = num1 - num2;
	printf("\n\t%d - %d = %d", num1, num2, resultado);
}
int multiplicar(int num1, int num2, int resultado){
	resultado = num1 * num2;
	printf("\n\t%d * %d = %d", num1, num2, resultado);
}
int dividir(int num1, int num2, int resultado){
	resultado = num1 / num2;
	printf("\n\t%d / %d = %d", num1, num2, resultado);
}
