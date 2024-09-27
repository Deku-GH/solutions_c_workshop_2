#include <stdio.h>

int main  (){

int i ,n;
printf("entre a nombre :");
scanf("%d",&n);

for(i=n-1;i >= 1;i--)
{
    n = n + i ;

}

printf (" la somme des premiers nombres naturels  = %d",n);
    return 0;
}