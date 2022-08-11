//Program to identify if a student is pass or fail in three subjects//
#include<stdio.h>
int main()
{
  float phy,math,chem,total;
  printf("Enter your Physics marks\n");
  scanf("%f",&phy);

  printf("Enter your Chemistry marks\n");
  scanf("%f",&chem);

  printf("Enter your Mathematics marks\n");
  scanf("%f",&math);

  total=((phy+math+chem)/3);
  
  if(total<40||phy<33||math<33||chem<33)
  {
      printf("Youre total is %f and you have failed the examination\n",total);
    
  }
    else
  {
      printf("Your total is %f and You have successfully passed in all subjects\n",total);
  }
  return 0;
}