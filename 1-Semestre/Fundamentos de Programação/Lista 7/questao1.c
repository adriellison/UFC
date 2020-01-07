#include <stdio.h>

int main(){
int i;
char meio[20];

printf("digite um algo:\n");
gets(meio);

for(i = 0; meio[i] != '\0'; i++ ){
    if(i <= 5 && i != '\32'){
            printf("%d - %c\n", i, meio[i]);
    }
    }
}
