#include <stdio.h>
#include <math.h>

int main (){
    float a , b ; 
      printf("entre de nombre b :\n" );
      scanf("%f",&a);

      printf("entre de nombre b \n ");
      scanf("%f",&b);

      printf("a + b = %f \n",a + b);
      printf("a - b = %f \n",a - b);
      printf("a * b = %f \n",a * b);

  if (a!=0 && b!= 0 )
      printf("a / b = %f",a/b); 

  else 
     printf(" la division et impossible ");
 return 0;
 }