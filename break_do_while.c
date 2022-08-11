#include<stdio.h>
int main()
{
 int i=1;
 do{
    printf("The value of i is %d\n",i);
    i++;
    if(i>15)
        break;

 }while(i<20);
 
 
  return 0;
}