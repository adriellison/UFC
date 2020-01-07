#include <stdio.h>
int main(){

int mat[4][4]={0};
int i,j,l,c,maior;
    maior=-999;

for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        printf("Digite o numero da linha %d coluna %d:",i+1,j+1);
        scanf("%d",&mat[i][j]);
    }
}
printf("\n");

for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        printf("%d\t",mat[i][j]);
        if(mat[i][j]>maior){
            maior=mat[i][j];
            l=i+1;
            c=j+1;
        }
    }
    printf("\n");
}
printf("\n");
printf("\nO maior numero e %d, que esta na linha %d coluna %d.\n",maior,l,c);
return 0;
}
