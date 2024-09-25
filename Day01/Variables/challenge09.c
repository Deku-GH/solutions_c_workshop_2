#include <stdio.h> 
#include <math.h>

int main (){

   float x1 , x2 , y1 , y2, z1 , z2 , Distance ;

   printf("give me x1 :\n "); 
   scanf("%f",&x1);

   printf("give me x2 :\n");
   scanf("%f",&x2);

   printf("give me y1 :\n"); 
   scanf("%f",&y1);

   printf("give me y2 :\n "); 
   scanf("%f",&y2);
   
   printf("give me z1 :\n"); 
   scanf("%f",&z1);

   printf("give me z2 :\n "); 
   scanf("%f",&z2);

   Distance = sqrt(pow(x2-x1,2.0) + pow(y2-y1 ,2.0) + pow(z2-z1,2.0));
   printf ("la distance = %f",Distance);
 return 0;
 }