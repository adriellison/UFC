#include <stdio.h>
int main(){
	int n, i, fat = 1;
	printf("Fatorial, digite um numero: ");
	scanf("%d", &n);
	for(i = 1; i <= n; i++){
		fat *= i;
	}
	printf("%d", fat);
	return 0;
}
