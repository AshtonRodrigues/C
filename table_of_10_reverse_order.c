#include<stdio.h>
int main()
{
 int i,n;
 printf("Upto how many numbers do you want to find the table of 10 ? :\n");
 scanf("%d",&n);
 for(i=n;i>0;i--)
 {
    printf("10 * %d = %d",i,10*i);
    printf("\n");
 }
 
 
  return 0;
}