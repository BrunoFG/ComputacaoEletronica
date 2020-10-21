#include <stdio.h>
int main(){
    int i,j, k, matriz[4][4];
    do{
        scanf("%d", &k);
        if(k==0){
            break;
        }
        for(i=0; i<4; i++){
            for(j=0; j<4; j++){
                scanf("%d", &matriz[i][j]);
            }
        }
        for(i=0; i<4; i++){
            for(j=0; j<4; j++){
                if(i==j){
                    printf("%d ", matriz[j][i]*k);
                }else{
                    printf("%d ", matriz[j][i]);
                }
            }
            printf("\n");
        }
    }while(1<2);
}