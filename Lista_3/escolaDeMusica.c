#include <stdio.h>

int ClassificaAluno(float media, int faltas){
    if(faltas>10){
        printf("REPROVADO POR FALTAS");
    }else{
        if(media>=9.5){
            printf("APROVADO COM LOUVOR");
        }else if(media>=7){
            printf("APROVADO");
        }else{
            printf("REPROVADO");
        }
    }
}

int main(){
    float m;
    int f;
    scanf("%f %d", &m, &f);
    ClassificaAluno(m, f);
}