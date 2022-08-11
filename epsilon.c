#include<stdio.h>
int main()
{
  int speed,s;
  printf("Enter the speed\n");
  scanf("%d",&speed);
  s=speed/10;
  switch(s)
  {
    case 10:printf("Ok");
            break;
    case 11:printf("Warning");
           break;
    case 12:printf("You are fined");
            break;
    default: printf("You are fine");
  }
    return 0;
}