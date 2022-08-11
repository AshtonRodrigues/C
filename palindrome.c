/*Program to check whether a 4-digit number is a palindrome or not*/
#include<stdio.h>
int main()
{
  int num1,rev=0,rem,original,initial;
  printf("Enter a 4 digit number:\n");
  scanf("%d",&num1);
  initial=num1;
  while(num1!=0)
    {
        rem=num1%10;
        rev=rev*10+rem;
        num1=num1/10;
    }
    if(initial==rev)
        printf("%d is a palindrome",initial);
    else   
        printf("%d is not a palindrome",initial);
  
  return 0;
}