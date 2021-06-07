#include <stdio.h>

int main(){
    int dias, km;
    printf("Digite a quantidade de dias de locacao:");
    scanf("%d",&dias);
    printf("\nDigite a quantidade de km rodados:");
    scanf("%d",&km);
    printf("\nValor a pagar pelo aluguel: R$ %f", (dias*30+km*0.01)*0.9);
}