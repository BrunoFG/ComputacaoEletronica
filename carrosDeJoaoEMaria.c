#include <stdio.h>

int main(){
    int anoAtual,maiorAno=0,cont=0;
    float velocidade,maiorVelocidade=0,soma=0,velocidadeMedia;
    char a;
    while(a!='n'||a!='N'){
        scanf("%c",&a);
        if(a=='n'||a=='N'){
            break;
        }
        scanf("%d %f",&anoAtual,&velocidade);
        if(anoAtual>maiorAno){
            maiorAno=anoAtual;
        }
        if(velocidade>maiorVelocidade){
            maiorVelocidade=velocidade;
        }
        cont++;
        soma+=velocidade;

    }
    velocidadeMedia=soma/cont;
    if(cont==0){
        printf("zero");
    }else{
        printf("%.2f\n",maiorVelocidade);
        printf("%d\n",maiorAno);
        printf("%.2f",velocidadeMedia);
    }
}
