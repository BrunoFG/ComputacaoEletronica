#include <stdio.h>
int main(){
    int glicoseAtual, total=0, afericoes=0;
    float media;
    do{
        scanf("%d",&glicoseAtual);
        total+=glicoseAtual;
        afericoes++;
    }while(glicoseAtual!=0);
    media=total/(afericoes-1);
    if(media<110){
        printf("Glicose Normal");
    }else if(media>=200){
        printf("Glicose Muito Alta");
    }else{
        printf("Glicose Alterada");
    }
}