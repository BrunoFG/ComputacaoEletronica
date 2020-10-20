#include <stdio.h>
int main(){
    int n, e, resposta=0;
    do{
        scanf("%d %d", &n, &e);
    }while(n<1 || n>1000 || e<1 || e>1000);
    int vetor[n];
    for(int i=0;i<n;i++){
        do{
            scanf("%d",&vetor[i]);
        }while(vetor[i]<1 || vetor[i]>1000);
        for(int c=0;c<i;c++){
            //printf("%d %d\n",vetor[i], vetor[c]);
            if(vetor[i]+vetor[c]==e){
                resposta=1;
            }
        }
    }
    if(resposta==1){
        printf("SIM");
    }else{
        printf("NAO");
    }
}