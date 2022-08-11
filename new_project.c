#include<stdio.h>
int main()
{
    /*Program to demonstrate the loops and how they work*/
  int i;
  printf("Enter the initial value of i\n");
  scanf("%d",&i);
  while(i>=10&&i<=20){
    printf("%d\n",i);
    i++;
  }  
  return 0;
}
