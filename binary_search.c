#include<stdio.h>
void main()
{
    int key,n,low,mid,high,loc,a[100],i;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array in ascending order:\n");
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
    printf("Enter the key element to be searched:\n");
    scanf("%d",&key);
    loc=-1;
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key==a[mid])
        {
            loc=mid+1;
            break;
        }
        else if(key<a[mid])
            {
                high=mid-1;
            }  
        else
                low=mid+1;
    }
    if(loc>0)
        printf("The key element is found at %d",loc);
    else
        printf("Search unsuccessful\n");
}
      
