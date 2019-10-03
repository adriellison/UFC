#include <stdio.h>
#include <windows.h>
int main(){
	int num1, num2, result;

	void mensagem();
	void limpar();
	int insiraNumero(int num1, int num2);
	char operacao();
	int somar(int num1, int num2);
	int subtrair(int num1, int num2);
	int multiplicar(int num1, int num2);
	int dividir(int num1, int num2);

	mensagem();
	insiraNumero(num1, num2);
	operacao();
}
void mensagem(){
	printf("\t---------------\n");
	printf("\t| Calculadora |\n");
	printf("\t---------------\n");
}
void limpar(){
	system("cls");
}
int insiraNumero(int num1, int num2){
	printf("Digite  o primeiro valor: ");
	scanf("%d", &num1);
	printf("Digite  o segundo valor: ");
	scanf("%d", &num2);
	return num1, num2;
}
char operacao(){
	char escolher;
	printf("Digite a operacao deseja: [+ - / *]");
	scanf("%s", &escolher);
	if(escolher == "+"){
		somar();
	}
	else if(escolher == "-"){
		subtrair();
	}
	else if(escolher == "*"){
		multiplicar();
	}
	else if(escolher == "/"){
		dividir();
	}
	else{
		printf("Opcao invalida!");
	}
}
int somar(num1, num2){
	result = num1 + num2;
	return result;
}
int subtrair(num1, num2){
	result = num1 - num2;
	return result;
}
int multiplicar(num1, num2){
	result = num1 * num2;
	return result;
}
int dividir(num1, num2){
	result = num1 / num2;
	return result;
}
