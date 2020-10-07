#include <stdio.h>
#include <math.h>

void EXPLICA_PROGRAMA(){
    printf("*********");
    printf("Matricula:********* - F3");
    printf("O programa gera duas sequências distintas a partir de quatro variáveis, calcula a distância entre todos os valores de mesmo índice, faz a somatória dos valores de cada sequência e apresenta estes dados ao usuário que terá a opção de reiniciar o código sem precisar fechar e reabrí-lo");
}
int CALCULA_TERMO(int penultimoTermo, int antepenultimoTermo){
    return penultimoTermo + antepenultimoTermo;
}
int CALCULA_DIFERENCA(int termoDeU, int termoDeT){
    return abs(termoDeU - termoDeT);;
}
int main(){
    int U0, U1, T0, T1, k=1, dAtual, dMax=0,dLimite=300000, repita, somaAcumuladaU=0, somaAcumuladaT=0, ultimoU, ultimoT, penultimoU, penultimoT, antepenultimoU=0, antepenultimoT=0, diferencaAcumuladas;
    char execute;
    do{
        do{
            printf("Digite o primeiro termo de U: ");
            scanf("%d",&U0);
            printf("Digite o segundo termo de U: ");
            scanf("%d",&U1);
            printf("Digite o primeiro termo de T: ");
            scanf("%d",&T0);
            printf("Digite o segundo termo de T: ");
            scanf("%d",&T1);
            if(U0 == T0 && U1 == T1){repita = 1;}
        }while(U0<0 || T0<0 || U1<=U0 || T1<=T0 || repita == 1);
        do {
            if(k==1){ // primeiro termo da sequência
                penultimoU = U0;
                penultimoT = T0;
            }else if(k==2){ // segundo termo da sequência
                penultimoU = U1;
                penultimoT = T1;
            }else if(k==3){ // terceiro termo da sequência
                penultimoU = U1;
                penultimoT = T1;
                antepenultimoU = U0;
                antepenultimoT = T0;
            }else if (k>3){ // demais termos da sequência
                antepenultimoU = penultimoU;
                antepenultimoT = penultimoT;
                penultimoU = ultimoU;
                penultimoT = ultimoT;
            }
            ultimoU = CALCULA_TERMO(penultimoU, antepenultimoU); // calcula o termo atual da sequência U
            ultimoT = CALCULA_TERMO(penultimoT, antepenultimoT); // calcula o termpo atual da sequência T
            dAtual = CALCULA_DIFERENCA(ultimoU,ultimoT); // calcula a distancia entre os termos atuais de U e T
            somaAcumuladaU += ultimoU; // acrescenta o termo atual de U ao somatório dos termos de U
            somaAcumuladaT += ultimoT; // acrescenta o termo atual de T ao somatório dos termos de T
            diferencaAcumuladas = CALCULA_DIFERENCA(somaAcumuladaU, somaAcumuladaT); // calcula a diferença entre as somas acumuladas
            printf("\nA distância entre U%d:%d e T%d:%d é: %d\n",k-1,ultimoU,k-1,ultimoT,dAtual);
            printf("As somas acumuladas de U e de T até então são %d e %d, respectivamente\n", somaAcumuladaU, somaAcumuladaT);
            printf("A diferença entre as somas acumuladas é: %d\n", diferencaAcumuladas);
            if (dAtual>dMax && dAtual<dLimite){
                dMax = dAtual; // armazenamento da distância máxima
            }else{
                break;
            }
            k++;
        }while(dLimite>=1);
        printf("A distância máxima é: %d\n\n", dMax);
        printf("deseja rodar o código novamente? Digite 'N' ou 'n' para sair do programa\n");
        scanf(" %c",&execute);
        if(execute=='N' || execute=='n'){break;}
    }while(execute!='N' || execute!='n');
    printf("Programa finalizado!");
}