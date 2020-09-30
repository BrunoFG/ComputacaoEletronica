#include <stdio.h>
#include <math.h>
int main(){
    int linhas, x, y;
    scanf("%d",&linhas);
    for (int i=0; i<linhas; i++){
        do{
            scanf("%d %d", &x, &y);
        }while(x<1 || x>100 || y<1 || y>100);
        
        if(r(x,y)>b(x,y)&&r(x,y)>c(x,y)){
            printf("Rafael ganhou\n");
        }else if(b(x,y)>r(x,y)&&b(x,y)>c(x,y)){
            printf("Beto ganhou\n");
        }else{
            printf("Carlos ganhou\n");
        }
    }
}
int r (x,y){
    int resultadoR = (pow((3*x),2)) + (pow(y,2));
    return resultadoR;
}
int b (x,y){
    int resultadoB = 2*(pow(x,2)) + (pow((5*y),2));
    return resultadoB;
}
int c (x,y){
    int resultadoC = -100*x + (pow(y,3));
    return resultadoC;
}