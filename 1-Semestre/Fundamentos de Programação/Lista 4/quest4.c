#include <stdio.h>
int main(){
	int n, i=1, d=0;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		if(n % i == 0){
			d=i;
			printf("%d\n", d);
		}
	}
	return 0;
}
