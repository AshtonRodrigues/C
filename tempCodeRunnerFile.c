#include<stdio.h>
int main()
{
 float income,tax=0,tax1=0,tax2=0;
 printf("Welcome!,Please enter your income\n");
 scanf("%f",&income);
 if(income>=250000&&income<=500000)
 {
    tax=(5/100)*income;
    printf("You income tax is %f\n",tax);
 }