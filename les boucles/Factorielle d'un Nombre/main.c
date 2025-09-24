#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,sum;
    printf("entre un numbre:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        sum = sum*i;

    }
    printf("%d",sum);

        return 0;
}
