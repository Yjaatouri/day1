#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ,i,sum=0;
    printf("entre un nobmre naturel:");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        if(i%2!=0){
            sum = sum+i;
        }
    }
    printf("%d",sum);
    return 0;
}
