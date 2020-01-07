#include <stdio.h>
#include <string.h>
int main(){

void troc(char x[],int n);
char str[31];

printf("Digite uma frase:\n");
gets(str);

troc(str,31);

printf("\n%s\n",str);
return 0;
}
void troc(char x[],int n){
int i;

for(i=0;i<n;i++){
    if(x[i]== 'a' || x[i]== 'e' || x[i]== 'i' || x[i]== 'o' || x[i]== 'u') x[i]='.';
}

}
