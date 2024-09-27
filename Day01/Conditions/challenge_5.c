#include <stdio.h>


int main (){
    int annee,mois , jours , heurs , minutes , seconde ,name ;
    
    printf("entre la nomber de l annee :");
    scanf("%d",&annee );

    printf("%d annee = mois = 1 jours = 2 heurs = 3 seconde = 4 ",annee);
    scanf("%d",&name);

     mois = annee * 12 ;
     jours = annee * 365 ;
     heurs = annee * 8760 ;
     minutes = annee * 525600 ;
     seconde = annee * 31536000 ;


switch (name)
{
 case   1 : printf ("%d an = %d",annee,mois);
     break;
 case 2 :printf ("%d an = %d",annee,jours);
     break;
  case 3: printf ("%d an = %d",annee,minutes);
     break;
  case 4 :printf ("%d an = %d",annee,seconde);
     break;
  default: 
      break;
}


}
