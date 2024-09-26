#include <stdio.h>


int main (){
    int annee,mois , jours , heurs , minutes , seconde ;
    printf("entre la nomber de l annee :");
    scanf("%d",&annee);
     

     mois = annee * 12 ;
     jours = annee * 365 ;
     heurs = annee * 8760 ;
     minutes = annee * 525600 ;
     seconde = annee * 31536000 ;

printf ("%d an = %d",annee,mois);
printf ("%d an = %d",annee,jours);
printf ("%d an = %d",annee,minutes);
printf ("%d an = %d",annee,seconde);







}
