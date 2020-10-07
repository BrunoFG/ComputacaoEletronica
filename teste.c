#include <stdio.h>
#include <math.h>

int CALCULA_TERMO(int penultimoTermo, int antepenultimoTermo){
    return penultimoTermo + antepenultimoTermo;
}
int CALCULA_DIFERENCA(int termoDeU, int termoDeT){
    return abs(termoDeU - termoDeT);;
}
int main(){
    int U0, U1, T0, T1, k=0, dAtual, dMax=0;
    int ultimoU, ultimoT, penultimoU, penultimoT, antepenultimoTermoU=0, antepenultimoTermoT=0;
    printf("Digite U0, U1, T0 e T1:\n");
    scanf("%d",&U0);
    //printf("O valor de U0 é: %d\n",U0);
    scanf("%d",&U1);
    //printf("O valor de U1 é: %d\n",U1);
    scanf("%d",&T0);
    //printf("O valor de T0 é: %d\n",T0);
    scanf("%d",&T1);
    //printf("O valor de T1 é: %d\n",T1);
    penultimoU = U0;
    penultimoT = T0;
    do {
        //printf("%d %d %d %d\n", penultimoU, penultimoT, antepenultimoTermoU, antepenultimoTermoT);
        ultimoU = CALCULA_TERMO(penultimoU, antepenultimoTermoU);
        ultimoT = CALCULA_TERMO(penultimoT, antepenultimoTermoT);
        dAtual = CALCULA_DIFERENCA(ultimoU,ultimoT);
        if (dAtual>dMax){
            dMax = dAtual;
        }
        k++;
        if(k==0){
            penultimoU = U0;
            penultimoT = T0;
        }else if(k==2){
            penultimoU = U1;
            penultimoT = T1;
        }else{
            penultimoU = ultimoU;
            penultimoT = ultimoT;
            antepenultimoTermoU = penultimoU;
            antepenultimoTermoT = penultimoT;
        }
        printf("A diferença entre U%d e T%d é: %d\n",k-1,k-1,dAtual);
    }while(k<1);
}