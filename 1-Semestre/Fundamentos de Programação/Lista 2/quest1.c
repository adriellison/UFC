#include<stdio.h>

int main() {

	int a;
	int b;
	int i;
	int ii;
	int iii;
	int iv;
	int v;

	scanf("%i", &a);
	scanf("%i", &b);

	i = a + b;
	ii = a - b;
	iii = a * b;
	iv = a / b;
	v = a % b;

	printf("%i\n%i\n%i\n%i\n%i\n", i,ii,iii,iv,v);
	return 0;
}
