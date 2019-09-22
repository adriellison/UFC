#include <stdio.h>
int main(){
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	if(num1 > num2){
		printf("%d maior", num1);
	}else if(num2 > num1){
		printf("%d maior", num2);
	}else{
		printf("Numeros iguais");
	}
	return 0;
}
