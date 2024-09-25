#include <stdio.h>


int main (){
   
   int a , b ,la_somme; 
   printf("entre a");
   scanf("%d",&a);

   printf("entre b");
   scanf("%d",&b);

   la_somme = a + b ;
   if (a==b)
      printf("le triple de leur somme = %d ", la_somme * 3);
    
    else 
       printf("la somme = %d",la_somme);


     


}