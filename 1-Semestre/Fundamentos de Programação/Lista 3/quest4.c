#include <stdio.h>
int main(){
	int num;
	scanf("%d", &num);
	if(num % 3 == 0){
		if(num % 5 == 0){
			printf("divisiel pelos dois");
		}else{
			printf("divisivel somente por 3");
		}
	}else if(num % 5 == 0){
		printf("divisivel somente por 5");
	}else{
		printf("nao e divisivel por nenhum dos dois");
	}
}
