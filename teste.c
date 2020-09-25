#include <stdio.h>
int main(){
    int entrada;
    int controle;
    int linha;
    scanf("%i", &entrada);
    if(1<=entrada && entrada <=40){
        do{
            controle=0;
            linha++;
            do{
                controle++;
                printf("%i",controle);
            }while(controle<linha);
            printf("\n");
        }while(linha<entrada);
    }
    return 0;
}