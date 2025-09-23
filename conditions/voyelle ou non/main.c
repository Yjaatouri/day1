#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c ;
    printf("entre character:");
    scanf("%c",&c);

    switch (c){
            case 'a' : case 'A':
            case 'e' : case 'E':
            case 'i' : case 'I':
            case 'u' : case 'U':
            case 'y' : case 'Y':

                printf("%c est un voyelle",c);
                break;
            default:
                printf("%c est un constatnt",c);


    }


}
