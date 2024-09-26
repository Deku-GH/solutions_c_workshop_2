#include <stdio.h>


int main(){
   

   float nombre ;

   printf ("entre a nombre : ");
   scanf("%f",&nombre);



   if (nombre == 0)
         printf("la nombre est nut ");
    else if (nombre < 0)
         printf("la nombre est Négatif");
    else 
         printf("la nombre est positif");

}