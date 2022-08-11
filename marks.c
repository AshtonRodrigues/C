// Program mentioning marks of a student in an examination based on the following formats//
// A=90-100, B=80-90, C=70-80, D=60-70, F<70//
#include<stdio.h>
int main()
{
    float marks;
    printf("Please enter your subject marks\n");
    scanf("%f",&marks);
    if(marks>=90&&marks<=100)
    printf("Your grade is A\n");
    else if(marks>=80&&marks<90)
    printf("Your grade is B\n");
    else if(marks>=70&&marks<80)
    printf("Your grade is C\n");
    else if(marks>=60&&marks<70)
    printf("Your grade is D\n");
    else
    printf("Your grade is F,You have failed\n");
    return 0;
}
