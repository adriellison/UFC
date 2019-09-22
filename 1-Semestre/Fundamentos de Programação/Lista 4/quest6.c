#include <stdio.h>
#include <math.h>

void main(){
	int k, n;
	float h = 0;
    scanf("%d", &n);
	for (k = n; k >= 1; k = k - 1){
		h = h + 1.0 / k;
	}
	printf("%f\n", h);
}
