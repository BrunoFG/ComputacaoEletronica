#include <stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  if(n==1){
    printf("Nordeste");
  }else if(n==2){
    printf("Norte");
  }else if(n==3 || n==4){
    printf("Centro-Oeste");
  }else if(n>=5 && n<=9){
    printf("Sul");
  }else if(n>=10 && n<=15){
    printf("Sudeste");
  }
}