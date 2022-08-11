#include<stdio.h>
int main()
{
 int i=1,n;
 printf("Enter the number you want to find the table of:\n");
 scanf("%d",&n);
 for(i;i<=25;i++)
  {
    printf("%d * %d= %d\n",n,i,n*i);
  }
 return 0;
}