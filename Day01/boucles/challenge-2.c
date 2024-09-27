
#include <stdio.h>
int main  (){
int i ,s;
printf("entre a nombre :");
scanf("%d",&s);
for(i=s-1;i >= 1;i--){
    s = s * i ;
    printf("%d * %d= %d \n",s,i,s * i);
     
    
}
printf (" calcule la factorielle d'un nombre entier positif = %d",s);
    return 0;
}