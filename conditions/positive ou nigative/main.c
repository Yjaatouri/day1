#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("entre a nombre:");
    scanf("%d",&n);

    if (n>0){
        printf("%d est positive ",n);
    }
    else if(n<0){
            printf("%d est nigative",n);

    }
    else{
        printf("%d est null",n);
    }


    return 0;
}
