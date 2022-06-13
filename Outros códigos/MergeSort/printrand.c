#include <stdio.h>
#include <stdlib.h>

void mergesort(int *v, int n);
void sort(int *v, int *c, int i, int f);
void merge(int *v, int *c, int i, int m, int f);

int main(){
	int v[10];
	int i;
	for (int i = 0; i <= 9; i++){
		v[i] = rand() % 10;
		printf("%d\n", v[i]);
	}

	return 0;
}