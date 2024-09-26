#include <stdio.h>

int main(){
    char C ;
     
    printf("entre a caracter : ");
    scanf("%c",&C);

    (int)C ;

    if (65<= C && C<90)
       {
         printf("'il fait partie des alphabets.\n");
         printf("est Majuscule");
        }
    else if ((97<= C && C<122))
       {
         printf("'il fait partie des alphabets.\n");
         printf("est  miniscules ");
        }
    else
      printf("vous n avez pas saisi a caracter");


}