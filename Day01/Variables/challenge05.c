#include <stdio.h>

int main (){

float  C ; 
printf("entre le temperature de leau :");
scanf("%f",&C);
if (C<0)
    printf("leau est solide ");
else if (0<=C && C<100)
    printf ("leau est liquide");

else
    printf("leau est gaz");
    return 0;
}