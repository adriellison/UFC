#include <stdio.h>
int main() {
	int i, n, y, resultado=1;
	printf("digite um numero:");
	scanf("%d", &n);
	printf("digite um numero:");
	scanf("%d", &y);

	if (n % y == 0) {
		printf("MMC= %d", n);
	}
	else if (y % n == 0) {
		printf("MMC= %d", y);
	}
	else {
		for(i=1; i<n*y; i++) {
			if (i % n == 0 && i % y == 0) {
				printf("MMC = %d", i);
				return 0;
			}
		}
	}
	return 0;
}
