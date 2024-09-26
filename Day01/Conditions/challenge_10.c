#include <stdio.h>

int main (){
     int jj ,mm , nnnn ;
     printf("entre la jour :");
     scanf("%d",&jj);

     printf("entre la jour :");
     scanf("%d",&mm);   

     printf("entre la jour :");
     scanf("%d",&nnnn);
     switch (mm)
     {
     case  1 : printf("%d-janvier-%d",jj,nnnn);
        break;
     case  2 : printf("%d-février-%d",jj,nnnn);
        break;
     case  3 : printf("%d-mars-%d",jj,nnnn);
        break;
     case  4 : printf("%d-avril-%d",jj,nnnn);
        break;
     case  5 : printf("%d-mai-%d",jj,nnnn);
        break;
     case  6 : printf("%d-juin-%d",jj,nnnn);
        break;
     case  7 : printf("%d-juillet-%d",jj,nnnn);
        break;
     case  8 : printf("%d-aout-%d",jj,nnnn);
        break;
     case  9 : printf("%d-septembre-%d",jj,nnnn);
        break;
     case  10 : printf("%d-octobre-%d",jj,nnnn);
        break;
     case  11 : printf("%d-novembre-%d",jj,nnnn);
        break;
     case  12 : printf("%d-décembre-%d",jj,nnnn);
        break;
     default:printf("you have errore");
        break;
     }


}