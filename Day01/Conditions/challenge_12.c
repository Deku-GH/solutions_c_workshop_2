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
     
    
    if (hh>=hh2 ){
          
        if (mm>mm2 ||  mm<=mm2){
         if ( ss>ss2)
             printf("Le premier instant vient avant le deuxième");
            
        }
        
    }
         
         
         
         
         
    if (hh<=hh2 &&   ss<ss2)
    {
          
        if ( mm>mm2 ||  mm<=mm2){
            
              
         if (ss<ss2)
             printf("Le premier instant vient avant le deuxième");
            
                    }
        
    }
    
         
         
         
         
         
    else 
         printf("Il s'agit du même instant");

}