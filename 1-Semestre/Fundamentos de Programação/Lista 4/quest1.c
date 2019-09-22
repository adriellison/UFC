#include<stdio.h>
#include<math.h>

int main(){
	int x, n, r;
	scanf("%d%d", &x, &n);
	if(n>0){
    r = pow(x, n);
    printf("%d", r);
	}else{
	  printf("nao util a questao.");
	}
	return 0;
}
