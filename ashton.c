#include<stdio.h>
int main()
{
  int a,b,b1,b2;
  printf("Enter two numbers: \n");
  scanf("%d%d",&a,&b);
  b1=sizeof(a);
  b2=sizeof(b);
  printf("/n %d /n %d",b1,b2);
  return 0;
}