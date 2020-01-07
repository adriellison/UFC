#include <stdio.h>
int main(){
        int vec[100], i = 0, j = 0;
        while(i != 100){
                j++;
                if(j % 7 != 0 && j % 10 != 7){
                        vec[i] = j;
                        i++;
                }
        }
        for(i = 0; i < 100; i++){
                printf("%d\n", vec[i]);
    }
}
