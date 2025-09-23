#include <stdio.h>


int main()
{
    int x,a;
    float result;
    printf("pour choici Mois entre 1\n");
    printf("pour choici Jours entre 2\n");
    printf("pour choici Heures entre 3\n");
    printf("pour choici Minutes entre 4\n");
    printf("pour choici Seconds entre 5\n");

    printf("entre le nombre:");
    scanf("%d",&x);

    printf("entre le nombre des annees:");
    scanf("%d",&a);

    switch (x){
        case 1 :{result = a *12;
        printf("il y a %.2f mois dans l'annee",result);
                break;}
        case 2 :{result = a *365;
        printf("il y a %.2f jours dans l'annee",result);
                break;}
        case 3 :{result = a *8760;
        printf("il y a %.2f heurs dans l'annee",result);
                break;}
        case 4 :{result = a *525600;
        printf("il y a %.2f minuts dans l'annee",result);
                break;}
        case 5 :{result = a *31536000;
        printf("il y a %.2f secondes dans l'annee",result);
                break;}

    }





    return 0;
}
