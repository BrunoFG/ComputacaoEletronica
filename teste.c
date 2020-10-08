// AULÃO DE REVISÃO
#include <stdio.h>
#include <math.h>
void EXPLICA_PROGRAMA(){
    printf("nome:\n");
    printf("matrícula: \n");
    printf("Descrição: \n\n");
}
int CALCULA_TERMO(int Sn1, int Sn2){
    return Sn1 + Sn2;
}
int CALCULA_DIFERENCA(int Un, int Tn){
    return abs(Un-Tn);
}
int IMPRIME_RESULTADOS(int indice, int Uatual, int Tatual, int somaU, int somaT){
    int difUT = CALCULA_DIFERENCA(Uatual, Tatual);
    int difAcumuladas = CALCULA_DIFERENCA(somaU, somaT);
    printf("índice:%d U:%d T:%d dUT:%d somaU:%d somaT:%d dSoma:%d\n", indice, Uatual, Tatual, difUT, somaU, somaT, difAcumuladas);
}
int main(){
    char resposta;
    while(resposta != 'n' || resposta != 'N'){
        int Dk, Uk, Tk, U0, U1, T0, T1, Dmax=0, k=0, Uk1, Uk2=0, Tk1, Tk2=0, Uacumulada=0, Tacumulada=0, DifAcumuladas, Dlimite;
        do{    
            printf("Digite a distância máxima: ");
            scanf("%d", &Dlimite);
        }while(Dlimite<1 || Dlimite>300000);
        do{
            do{
                printf("Digite os valores iniciais de U\n");
                scanf("%d",&U0);
                scanf("%d",&U1);
            }while(U0<0 || U1<=U0);
            do{
                printf("Digite os valores iniciais de T\n");
                scanf("%d",&T0);
                scanf("%d",&T1);
            }while(T0<0 || T1<=T0);
        }while(U0==T0 && U1==T1);
        do{
            if(k==0){
                Uk1 = U0;
                Tk1 = T0;
            }else if(k==1){
                Uk1 = U1;
                Tk1 = T1;
            }else if(k==2){
                Uk2 = U0;
                Tk2 = T0;
                Uk1 = U1;
                Tk1 = T1;
            }else if(k>2){
                Uk2 = Uk1;
                Tk2 = Tk1;
                Uk1 = Uk;
                Tk1 = Tk;       
            }
            Uk = CALCULA_TERMO(Uk1, Uk2);
            Tk = CALCULA_TERMO(Tk1, Tk2);
            Dk = CALCULA_DIFERENCA(Uk, Tk);
            Uacumulada += Uk;
            Tacumulada += Tk;
            IMPRIME_RESULTADOS(k,Uk,Tk,Uacumulada,Tacumulada);
            k++;
            if(Dk>Dmax){
                Dmax = Dk;
            }
        }while(Dk<=Dlimite);
        printf("Deseja executar o programa novamente?\n");
        scanf(" %c",&resposta);
        if (resposta == 'n' || resposta=='N'){
            break;
        }
    }
    printf("Programa finalizado!\n");
    EXPLICA_PROGRAMA();
}