#include<stdio.h>
int main()
{
    unsigned int year;
    printf("Type your desired year\n");
    scanf("%u",&year);
    if(year%4==0)
    {    
        printf("It is a leap year!\n");
    }
    else
    {
        printf("It is not a leap year.. sorry about that\n");
    }

    return 0;
}