#include <stdio.h>
// void recebe(int vec[], int n){
//     int i = 0;
//     while(i < n){
//         if(i % 7 == ){
//             vec[i] = i;
//             i++;
//         }
//     }
// }
// void imprimir(int vec[], int n){
//     int i;
//     for(i = 0; i < n; i++){
//     printf("vetor: %d\n", vec[i]);
//     }
// }
int main(){
    int vec[10], i = 1;
    while(i < 10){
        if(i / 7 != 0){
            vec[i] = i;
            i++;
        }
    }
    for(i = 0; i < 10; i++){
        printf("vetor: %d\n", vec[i]);
    }
}
