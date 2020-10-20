#include <stdio.h>
int main(){
    int dez[10], x, contador=0;
    for (int i=0;i<10;i++){
        scanf("%d",&dez[i]);
    }
    scanf("%d", &x);
    for (int c=0;c<10;c++){
        if(dez[c]==x){
            contador++;
        }
    }
    printf("%d", contador);
}