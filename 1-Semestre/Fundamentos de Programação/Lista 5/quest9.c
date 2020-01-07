#include <stdio.h>
int main () {
	int n, i, cont=0, p=1, ct=0;
	printf("digite um numero:");
	scanf("%d", &n);
	while(ct<n) {
		p = p +1;
		cont = 0;
		for(i=1; i<=p; i++) {
			if (p %i == 0) {
				cont = cont +1;
			}
		}
		if (cont == 2) {
			ct= ct+1;
		}
	}
	printf("\t %d", p);
	return 0;
}
