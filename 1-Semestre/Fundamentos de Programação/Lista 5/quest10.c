#include <stdio.h>
int main() {
	int a, b, Pa, Pb;
	printf("digite o tamanho do pulo do canguru a:");
	scanf("%d", &a);
	printf("digite o tamanho do pulo do canguru b:");
	scanf("%d", &b);

	Pa = a;
	Pb = b;

while (Pa != Pb ) {
	if (Pa < Pb) {
		Pa = Pa + a;
		printf("Canguru 1: %d\n", Pa);
	}
	else {
		Pb = Pb + b;
		printf("Canguru 2: %d\n", Pb);
	}
}
	printf("os cangurus vao se encontrar na distancia %d", Pa);
	return 0;
}
