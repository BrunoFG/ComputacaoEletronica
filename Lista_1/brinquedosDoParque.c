#include <stdio.h>
int main(){
    int F, I;
    scanf("%d %d", &F, &I);
    if(I>=16 && F>=170){
        printf("3");
    }else if(I>=14 && F>=150){
        printf("2");
    }else if(I<12 || F<=140){
        printf("0");
    }else{
        printf("1");
    }
    printf("\n");
}