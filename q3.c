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
 else if(income>500000&&income<=100000)
 {
    tax1=(20/100)*income;
    printf("You income tax is %f\n",tax1);
 }
 else if(income>100000)
 {
    tax2=(30/100)*income;
    printf("Your income tax is %f\n",tax2);
 }
 else
    printf("You dont have to pay any tax :)\n");
  return 0;
}