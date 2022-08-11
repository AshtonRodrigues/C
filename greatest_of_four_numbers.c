/*This program is used to find the greatest of four numbers given by the user */
#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the first number\n");
    scanf("%d",&a);

    printf("Enter the second number\n");
    scanf("%d",&b); 
    
    printf("Enter the third number\n");
    scanf("%d",&c);  

    printf("Enter the fourth number\n");
    scanf("%d",&d);
 
    if(a>b&&a>c&&a>d)
    {
        printf("%d is the greatest\n",a);
    }
    else if(b>a&&b>c&&b>d)
    {
        printf("%d is the greatest\n",b);
    }

    else if(c>a&&c>b&&c>d)
    {
        printf("%d is the greatest\n",c);
    }
    else
    {
        printf("%d is the greatest\n",d);
    }
  return 0;
}