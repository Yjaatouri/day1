#include <stdio.h>
#include <stdlib.h>

int main()
{
    int joursA, joursU, joursR,x;
    printf("entre le nombre des jours accordes:");
    scanf("%d",&joursA);

    printf("entre le nombre des jours utilise");
    scanf("%d",&joursU);

    printf("entre 1 pour temps plein ou 2 pour temps partiel");
    scanf("%d",&x);

    if(x==1){
        joursR = joursA-joursU;
        printf("le rest des jours est %d",joursR);
    }
    else if(x==2){
        joursR = (joursA/2) - joursU;
    }
    else {
        printf("entre un nombre entre 1 et 2");
    }
    return 0;
}
