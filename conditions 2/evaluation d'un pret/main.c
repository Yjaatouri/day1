#include <stdio.h>
#include <stdlib.h>

int main()
{
    int revenu , score , duree;
    printf("entre votre revenu :");
    scanf("%d",&revenu);

    printf("entre votre score :");
    scanf("%d",&score);

    printf("entre votre duree:");
    scanf("%d",&duree);

    if (revenu>=30000 && score>=700 && duree<=10){
        printf("eligible");
    }
    else if (revenu>=30000 && score >=650 && duree >= 15){
        printf("eligible avec condition");
    }
    else if (revenu <=30000 || score < 650 || duree >15 ){
        printf("pas eligible");
    }
}
