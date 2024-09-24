#include <stdio.h>


int main(){

    char name[20] ;
    char prenom[20] ;
    int age ;
    char sexe[20];
    char adresse_email[200];

    printf ("give me  your first name :\n");
    scanf("%s",name);

    printf("your last name :\n ");
    scanf("%s",prenom);

    printf("how old are you :\n ");
    scanf("%d",&age);

    printf("that is your gendre:\n");
    scanf("%s",sexe);

    printf("and i the ending your adresse emaile :\n ");
    scanf("%s",adresse_email);

    printf("your full name is : %s %s",name,prenom);

    printf("your age is : %d",age);

    printf("your gendre : %s",sexe);
    
    printf("your email : %s",adresse_email);


    return 0;
}