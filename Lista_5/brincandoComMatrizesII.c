#include <stdio.h>
int main(){
    int matriz[3][3], i, j, somatorio=0, menorLeitura=__INT_MAX__, delta, naodiagonal=0;
    float media=0, positivos=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf(" %d", &matriz[i][j]);
            if (matriz[i][j]>0){
                somatorio+=matriz[i][j];
                positivos++;
            }
            if(matriz[i][j]<menorLeitura){
                menorLeitura = matriz[i][j];
            }
            if(i!=j){
                naodiagonal+=matriz[i][j];
            }
        }
    }
    if(menorLeitura%2==0){
        delta=1;
    }else{
        delta=0;
    }
    media = (somatorio/positivos);
    printf("%.2f ", media);
    printf("%d ", menorLeitura);
    printf("%d ", delta);
    printf("%d\n", naodiagonal);
}