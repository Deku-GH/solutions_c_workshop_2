#include <stdio.h>

int main(){
    float  km_h , m_s;
   
  
    printf("entre  la vitesse en  kilomètres par heure :.\n  ");
    scanf("%f",&km_h);

    
   m_s = km_h * 0.27778 ;

    printf("la vitesse en mètres par seconde %f m/s",m_s );
        return 0;
        

}