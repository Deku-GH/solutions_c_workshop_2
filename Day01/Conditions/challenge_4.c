#include <stdio.h>
#include <math.h>

int main (){

//les varaibles qui demande pour user
int a , b , c ; 
// les varaible 
int delta , x ,x1 , x2 ;

//  demanbe les varaiblees

printf("entre a :\n ");
scanf("%d",&a);
printf("entre b :\n ");
scanf("%d",&b);
printf("entre c : \n");
scanf("%d",&c);

delta = pow(b , 2) - 4 * a * c ;



  if (delta < 0 )
    printf("il n y a pas de  slution reelle");
else if (delta == 0 )
        {
        x = -b / (2 * a);

        printf("il y a un seule solution : %d",x);

        }
else
       {
    printf("if delta > 0 il y a deux solution \n");

     x1 = (-b - sqrt(delta))/(2 * a) ;
     x2  = (-b + sqrt(delta))/(2 * a) ;


     printf("le solution un : %d \n" ,x1);
     printf("le solution deux : %d \n" ,x2);
       }
}