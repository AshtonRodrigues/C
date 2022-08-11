#include<stdio.h>
int main()
{
 int i,max,min;
 printf("Enter the range:\n");
 scanf("%d%d",&min,&max);
  for(i=min;i<max;i++)
    printf("%d\n",i+1);
  return 0;

}