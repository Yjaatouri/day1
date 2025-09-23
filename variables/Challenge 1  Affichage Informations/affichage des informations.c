#include <stdio.h>
int main(){
    char nom [15];
    char prenom[15];
    int age  ;
    char sexe [10];
    char email[30];

    printf("entre nom:");
    scanf("%s",&nom);

    printf("entre prenom:");
    scanf("%s",&prenom);

    printf("entre age:");
    scanf("%d",&age);

    printf("entre sexe:");
    scanf("%s",&sexe);

    printf("entre email:");
    scanf("%s",&email);

    printf("nom : %s\n",nom);
    printf("prenom : %s\n",prenom);
    printf("age: %d\n",age);
    printf("sexe : %s\n",sexe);
    printf("email: %s",email);


}
