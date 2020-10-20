#include <stdio.h>
int main(){
    int cod, qntd;
    float preco, subtotal, total;
    do{
        scanf("%d", &cod);
    }while(cod<1||cod>4);

    scanf("%d",&qntd);

    if(cod==1){
        preco=5.30;
    }else if(cod==2){
        preco=6.00;
    }else if(cod==3){
        preco=3.20;
    }else{
        preco=2.50;
    }
    subtotal = preco*qntd;
    if(subtotal>40.00||qntd>=15){
        total=subtotal*0.85;
    }else{
        total=subtotal;
    }
    printf("R$ %.2f",total);
}