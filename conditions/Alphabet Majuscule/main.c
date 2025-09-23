#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("enter alphabet:");
    scanf("%c",&c);
    if(c>='A' && c<='Z'){
        printf("%c alphabet majuscule",c);
    }
    else{
         printf("%c alphabet est pas majuscule",c);
    }
    return 0;
}
