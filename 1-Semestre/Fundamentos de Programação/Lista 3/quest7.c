#include <stdio.h>
#include <math.h>

int main(){
	int a, b, c,delta, x1, x2;
	scanf("%d %d %d", &a, &b, &c);
	delta = b*b-4*a*c;
	x1 = (-b + sqrt(delta))/2*a;
	x2 = (-b - sqrt(delta))/2*a;
	if(delta <0){
		printf("impossivel nos reais");
	}else{
		printf("%d %d", x1, x2);
	}
}
