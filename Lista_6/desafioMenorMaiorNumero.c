#include <stdio.h>
int main(){
    int vetor[100], minimo=__INT_MAX__, maximo=0;
    for(int i=0;i<100;i++){
        scanf("%d",&vetor[i]);
        if(vetor[i]==0){
            break;
        }
        if(vetor[i]>maximo){
            maximo=vetor[i];
        }
        if(vetor[i]<minimo){
            minimo=vetor[i];
        }
    }
    printf("%d %d", minimo, maximo);
}