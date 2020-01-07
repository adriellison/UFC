#include <stdio.h>
int main(){
	int n, k, c = 1;
	printf("Digite dois numeros separados por p:\n");
	scanf("%dp%d", &n, &k);
	for(int i=1; i<=k; i++){
		c = c * n;

	}
	printf("%d", c);
}