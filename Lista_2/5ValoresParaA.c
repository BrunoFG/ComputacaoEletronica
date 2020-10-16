#include <stdio.h>
int main(){
    int negativos=0;
    float a;
    for(int i=0;i<5;i++){
        printf("Digite um valor: ");
        scanf("%f",&a);
        if(a<0){
            negativos++;
        }
    }
    printf("Foram digitados %d números negativos\n", negativos);
}