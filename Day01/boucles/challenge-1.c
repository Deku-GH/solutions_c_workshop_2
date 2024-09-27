
#include <stdio.h>


int main()
{
    int i , n ;
    printf("entre un nombre :");
    scanf("%d",&n);
    for (i =0 ;i <11 ;i++ ){
        printf("%d * %d = %d \n",n,i,i*n);
    }

    return 0;
}