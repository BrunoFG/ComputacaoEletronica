#include <stdio.h>
#include <math.h>
int main (){
    int x, z, hogsmeadeX=34, hogsmeadeZ=220, kakaritoX=0, kakaritoZ=0, solitudeX=140, solitudeZ=456;
    float DH, DK, DS;
    scanf("%d %d", &x, &z);
    DH = sqrt(pow((x-hogsmeadeX),2)+pow((z-hogsmeadeZ),2));
    DK = sqrt(pow((x-kakaritoX),2)+pow((z-kakaritoZ),2));
    DS = sqrt(pow((x-solitudeX),2)+pow((z-solitudeZ),2));
    printf("Distancia para Hogsmeade: %.2f\n", DH);
    printf("Distancia para Kakarito: %.2f\n", DK);
    printf("Distancia para Solitude: %.2f\n", DS);
}