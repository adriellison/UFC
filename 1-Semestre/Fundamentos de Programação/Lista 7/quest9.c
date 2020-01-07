#include <stdio.h>
#include <string.h>
int main(){

void troc(int n,char x[],char a,char b);
char str[31];
char a,b;

printf("Digigte uma frase:\n");
gets(str);

troc(31,str,a,b);

printf("%s",str);

return 0;
}

void troc(int n,char x[],char a,char b){
    int i;

for(i=0;i<n;i++){
    if(x[i] == 'a') x[i] ='b';
}
}
