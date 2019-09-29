#include <stdio.h>
int num1, num2, result;
int main(){
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
int recebeNum(){
	printf("Digite dois numeros:\n");
	scanf("%d %d", &num1, &num2);

}
int soma(){
	result = num1 + num2;
	printf("Soma de %d + %d = %d", num1, num2, result );
}
