#include <stdio.h> 
#include <math.h>

int main (){
  float Moyenne_géométrique , a , b , c ;


printf("give tree nambres a :");
scanf("%f",&a);


printf("give tree nambre b :");
scanf("%f",&b);

printf("give tree nambres c :");
scanf("%f",&c);
Moyenne_géométrique = pow((a * b * c),(1.0/3.0));
printf("Moyenne géométrique = %f",Moyenne_géométrique) ;
 return 0;
 }