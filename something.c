// Program to verify is a person is eligible to vote//
#include<stdio.h>
int main()
{   
    int age;
    printf("Enter your required age\n");
    scanf("%d",&age );
    if(age>=18)
    printf("You are eligible to vote\n");
    else
    printf("You are too young to vote\n");
    return 0;
      
}