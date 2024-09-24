#include <stdio.h>

int main(){
    float la_température_en_Celsius  ;
    float la_température_en_kilvin  ;
  
    printf("entre la température en celsius : ");
    scanf("%f",&la_température_en_Celsius);

    
    la_température_en_kilvin = la_température_en_Celsius +  273.15 ;

    printf("la température en kilvin %f",la_température_en_kilvin );
}