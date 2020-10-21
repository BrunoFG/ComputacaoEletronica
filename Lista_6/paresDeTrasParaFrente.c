#include <stdio.h>
int main(){
    int numeros[10], pares[10], contapares=0;
    printf("Digite os 10 numeros inteiros:\n");
    for (int i=0;i<10;i++){
        scanf("%d", &numeros[i]);
        if(numeros[i]%2==0){
            pares[contapares]=numeros[i];
            contapares++;
        }
    }
    printf("Numeros pares na ordem inversa:\n");
    for(int c=contapares-1;c>=0;c--){
        printf("%d ", pares[c]);
    }
}