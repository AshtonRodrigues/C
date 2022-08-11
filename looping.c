#include<stdio.h>
int main()
{
 int i,k;
 for(i=0;i<11;i++)
 {  
     printf("%d\n", i);
        for(k=i;k>=0;k--)
        {   
            printf("%d ",k);
        }
 printf("\n");
 }       
  return 0;
}