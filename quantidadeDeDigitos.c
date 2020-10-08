#include <stdio.h>
#include <math.h>

int Quant_Dig(int n)
{
    int cnt= 0;
    if(n==0){
        cnt=1;
    }else{
        while(n != 0){
            n = n/10;
            cnt++;
        }
    }
    printf("%d", cnt);
}

int main()
{
    int num;
    do{
        scanf("%d", &num);
    }while(num<0||num>pow(2,30));
    Quant_Dig(num);
}