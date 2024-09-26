#include <stdio.h>

int main(){
    int hh , mm , ss , hh2 , mm2 , ss2 ;
     printf("Le premier instant");
     printf ("entre  lheur :");
     scanf("%d",&hh);
     printf ("entre minute:");
     scanf("%d",&mm); 
     printf ("entre seconte :");
     scanf("%d",&ss);



     printf("Le deuxième instant");
     printf ("entre  lheur :");
     scanf("%d",&hh2);
      printf ("entre minute:");
     scanf("%d",&mm2); 
     printf ("entre seconte :");
     scanf("%d",&ss2);
     
    
    if (hh>hh2 && mm>mm2  && ss>ss2)
         printf("Le premier instant vient avant le deuxième");
    else if (hh<hh2 && mm<mm2  && ss<ss2)
         printf("Le deuxième instant vient avant le premier");
    else 
         printf("Il s'agit du même instant");

}