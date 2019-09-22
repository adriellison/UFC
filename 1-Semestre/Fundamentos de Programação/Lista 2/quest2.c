#include<stdio.h>

int main() {
	int a;
	int b;
	int c;
	int i;
	int ii;
	int iii;
	int iv;
	int v;

	scanf("%i", &a);
	scanf("%i", &b);
	scanf("%i", &c);

	i = (a + b) + c;
	ii = (a + b) * c;
	iii = a * b - a;
	iv = a / (b + c);
	v = (a + c) % (b - c);

	printf("%i\n%i\n%i\n%i\n%i\n", i,ii,iii,iv,v);

	return 0;
}
