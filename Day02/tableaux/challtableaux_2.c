
#include <stdio.h>

int main()
{
    int n;
  
   printf("entre le nombre de arr :");
   scanf("%d",&n);
   int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("entre les nombres %d :", i + 1);
        scanf("%d", &arr[i]);
    }
    
   for(int v = 0 ; v <n ;v++)
   
          printf("%d",arr[v]);
}