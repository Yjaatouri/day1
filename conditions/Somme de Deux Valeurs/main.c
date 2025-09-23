#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x ,y,sum;
    printf("entre le 1ere numbre:");
    scanf("%d",&x);

    printf("entre le 2eme numbre:");
    scanf("%d",&y);

    if (x==y){
        sum = (x+y)*3;
    }
    else {
        sum = x+y;
    }
    printf("la sum est %d",sum);
    return 0;
}
