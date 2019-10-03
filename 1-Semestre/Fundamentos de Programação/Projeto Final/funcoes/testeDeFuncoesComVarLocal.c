#include <stdio.h>
int main(){
	int num1, num2, result;
	void imprimeMensagem(void);
	int recebeNum();
	int soma();

	imprimeMensagem();
	recebeNum();
	soma();
	return 0;
}
void imprimeMensagem(){
	printf("Teste de Funcoes\n");
}
int recebeNum(int num1, int num2){
	printf("Digite dois numeros:\n");
	scanf("%d %d", &num1, &num2);

}
int soma(int num1, int num2, int result){
	result = num1 + num2;
	printf("Soma de %d + %d = %d", num1, num2, result );
}
