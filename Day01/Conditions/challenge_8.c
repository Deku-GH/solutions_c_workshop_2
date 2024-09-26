#include <stdio.h>

int main(){

float  la_moyenne ;


printf("entre la moyenne : ");
scanf("%f",&la_moyenne);


if (la_moyenne <10 )

    printf("vous avez recalé");
else if (10<=la_moyenne && la_moyenne<=12)
    printf("vous avez obtenu le mention passable ");
else if (12<la_moyenne && la_moyenne<=14)
    printf(" vous avez obtient la mention assez bien");
else if (14<la_moyenne && la_moyenne<=16 )
    printf("vous avez obtient la mention bien");

else if (16<la_moyenne &&  la_moyenne<20)
    printf("vous avez obtient la mention très bien");
else
    printf(" put your notes");


}