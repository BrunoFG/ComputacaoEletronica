#include <stdio.h>
int main(){
    int turma2[45], turma3[30], resultado[45], indice=0;
    for(int i=0;i<45;i++){
        scanf("%d", &turma2[i]);
    }
    for(int j=0;j<30;j++){
        scanf("%d", &turma3[j]);
    }
    for(int i=0;i<45;i++){
        for(int j=0;j<30;j++){
            if(turma2[i]==turma3[j]){
                resultado[indice]=turma2[i];
                indice++;
            }
        }
    }
    for(int i=0;i<indice;i++){
        printf("%d ", resultado[i]);
    }
    printf("\n");
}