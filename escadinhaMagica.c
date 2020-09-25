#include <stdio.h>
int main(){
    int n;
    do{
        scanf("%d",&n);
    }while(n<1 || n>40);
    for (int i=1;i<=n;i++){
        for(int c=1;c<=i;c++){
            printf("%d",c);
            if(c<i){
                printf(" ");
            }
        }
        printf("\n");
    }
}