#include <stdio.h>

int main (){
  float numbre_1 , numbre_2,numbre_3,p1,p2,p3 ,Pfinile ;
  printf("entre 1er nombre : \n");
  scanf("%f",&numbre_1);

  printf("entre 2eme nombre : \n");
  scanf("%f",&numbre_2);

  printf("entre 3eme nombre  : \n");
  scanf("%f",&numbre_3);
  
  p1 = numbre_1 * 2 ;
  p2 = numbre_2 * 5 ;
  p3 = numbre_3 * 3  ; 
  Pfinile = ( p1 + p2 + p3) / 10; 
  
  printf("la resulte est : %f" ,Pfinile);
  



 return 0;
 }