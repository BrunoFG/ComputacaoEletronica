#include <stdio.h>
int main(){
    int n;
    do{
        scanf("%d",&n);
    }while(n<=1 && n>=1000);
    for(int i=1;i<=n;i++){
        printf("%d %d %d\n",i,i*i,i*i*i);
    }
}