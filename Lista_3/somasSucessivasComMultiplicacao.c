#include <stdio.h>
int main(){
    int num1, num2, multiplicacao=0, i;
    scanf("%d %d",&num1,&num2);
    for(i=0;i<num2;i++){
        multiplicacao+=num1;
    }
    printf("%d\n", multiplicacao);
}