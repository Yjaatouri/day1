#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i ,n;
    printf("entre un nombre naturel:");
    scanf("%d",&n);
    for(i=0;i<=10;i++){
        printf("%d * %d = %d\n",n,i,i*n);
    }
    return 0;
}
