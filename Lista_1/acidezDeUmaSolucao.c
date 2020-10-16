#include <stdio.h>
int main(){
    float ph;
    do{
        scanf("%f", &ph);
    }while (ph<1 || ph>14);
    if (ph<7){
        printf("Acida");
    }else if( ph>7){
        printf("Basica");
    }else{
        printf("Neutra");
    }
}