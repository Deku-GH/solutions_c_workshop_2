#include <stdio.h>

int main(){
    char C ;
     
    printf("entre a caracter : ");
    scanf("%c",&C);

    (int)C ;

    if (65<= C && C<90)
         printf("le caracter et Majuscule");
    else if ((97<= C && C<122))
         printf("le caracter et  miniscules ");
    else
      printf("vous n avez pas saisi e caracter");


}