#include <stdio.h>
#include <math.h>
#define M_PI 3.14


int main (){
float Volume , r ;

printf ("entre le rayon : ");
scanf("%f",&r);
 

Volume =(4.0/3.0) * M_PI * pow(r,3);


printf ("la valume = %f",Volume);
}