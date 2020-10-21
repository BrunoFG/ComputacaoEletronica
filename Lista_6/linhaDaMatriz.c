#include <stdio.h>
int main(){
    int linha;
    char operacao;
    float matriz[12][12], soma=0;
    do{
        scanf("%d", &linha);
    }while(linha<0||linha>11);
    scanf(" %c", &operacao);
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            scanf("%f", &matriz[i][j]);
        }
    }
    for(int j=0;j<12;j++){
        soma += matriz[linha][j];
    }
    if(operacao=='S'){
        printf("%.1f", soma);
    }else if(operacao=='M'){
        printf("%.1f", soma/12);
    }
}