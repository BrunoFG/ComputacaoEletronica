#include <stdio.h>
main(){
    int idadeAdotante, idadeAdotando;
    char parente, conjunta, casados, desconhecidos, consentimentoPais, consentimentoAdotando;
    scanf(" %d", &idadeAdotante);
    scanf(" %c", &parente);
    scanf(" %c", &conjunta);
    scanf(" %c", &casados);
    scanf(" %d", &idadeAdotando);
    scanf(" %c", &desconhecidos);
    scanf(" %c ", &consentimentoPais);
    scanf(" %c", &consentimentoAdotando);

    if (idadeAdotante<=18 || parente=='S'){
        printf("Não pode adotar");
    }else{
        if(conjunta == 'S' && casados == 'N'){
            printf("Não pode adotar");
        }else{
            if(desconhecidos=='N' && consentimentoPais=='N'){
                printf("Não pode adotar");
            }else{
                if(idadeAdotando>12 && consentimentoAdotando=='N'){
                    printf("Não pode adotar");
                }else{
                    if (idadeAdotante-idadeAdotando<=16){
                        printf("Não pode adotar");
                    }else{
                        printf("Pode adotar");
                    }
                }
            }
        }
    }
}