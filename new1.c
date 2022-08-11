#include<stdio.h>
int main()
{
    int a[50],i,pro=1,n;
    printf("Enter the number of elements of the array:\n");
    scanf("%d",&n);
    printf("Enter the elements in the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        pro=pro*a[i];
    }
    printf("Product of the elements is %d \t",pro);
    
    return 0;
}