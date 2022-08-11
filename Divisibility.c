#include <stdio.h>
int main()
{
    int a;
    printf("enter the number:");
    scanf("%d", &a);
    printf("Divisibility test returns:%d", a % 97);
    return 0;
}