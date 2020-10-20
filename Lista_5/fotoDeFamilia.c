#include <stdio.h>
int main(){
    int i, ordem[]={0,2,3,1};
    float altura[4], aux;
    for(i=0;i<4;i++){
        do{
            scanf("%f",&altura[i]);
        }while(altura[i]<=0);
    }
    for(int x=0;x<4;x++){
        for(int y=x;y<4;y++){
            if(altura[x]>altura[y]){
                aux=altura[x];
                altura[x]=altura[y];
                altura[y]=aux;
            }
        }
    }
    for(int c=0;c<4;c++){
        printf("%.2f\n",altura[ordem[c]]);
    }
}