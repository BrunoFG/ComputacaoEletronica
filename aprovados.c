#include <stdio.h>
int main(){
    int portugues, matematica, aprovados=0;
    float redacao;
    while(portugues>=0){
        scanf("%d",&portugues);
        if (portugues<0){
            break;
        }
        scanf("%d",&matematica);
        scanf("%f",&redacao);
        if(portugues>=40 && matematica>=21 && redacao>=7.0){
            aprovados++;
        }
    }
    printf("%d",aprovados);
}