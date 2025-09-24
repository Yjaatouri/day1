#include <stdio.h>
#include <stdlib.h>

int main()
{
    int budget , distination,nombreP;

    printf("entre budget :");
    scanf("%d",&budget);

    printf("1 pour plage\n");
    printf("2 pour montagne\n");
    printf("3 pour ville\n");

    printf("entre distinatination :");
    scanf("%d",&distination);

    printf("entre numbre de personne:");
    scanf("%d",nombreP);\

    if(budget>1000){
        printf("Voyage haut de gamme\n");
    }
    else if(budget>=500 && nombreP<=2){\
        printf("Voyage moyen\n");

    }

    else if (budget<500){
        printf("Voyage économique\n");
    }
    //recommandations

    if(budget >= 1000 && nombreP>2){
        printf("La destination recommandee : Plage ");
    }
    else if(budget >= 500 && nombreP<=2){
        printf("La destination recommandee : Montagne` ");
    }
    else {
        printf("La destination recommandee : Ville ");
    }
    return 0;
}
