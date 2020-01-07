#include <stdio.h>
#include <string.h>

int main(){
    char str[20], str2[20];
    int i, j;
    printf("digite uma frase.\n");
    gets(str);
    for(i = strlen(str); i >= 0; i--){
        printf("%c", str[i]);
    }
}
