#include <stdio.h>
#include <stdlib.h>

int main()
{
    int score , annee,recomponses;

    printf("entre score:");
    scanf("%d",&score);

    printf("entre annee:");
    scanf("%d",&annee);

    printf("entre recomponses:");
    scanf("%d",&recomponses);
    if(recomponses==1){
        score = score + (score*0.10);}
    else if(recomponses>1){
            score = score + (score*0.20);}
    else {
        score = score;
    }
    if(score>=90 && annee >= 5){
        printf("exellente");
    }
    else if (score>=75 && annee >= 3){
        printf("bon");
    }
    else if (score>=50 && annee < 3){
        printf("Satisfaisante");
    }
    else if (score<50){
        printf("insuffisante");
    }
    return 0;
}
