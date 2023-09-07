#include<stdio.h>
int main()
{
    int low,high,mid,key,n,i,a[100];
    printf("The value of the key is ");
    scanf("%d",&key);
    printf("The value of number of elements in the array ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the values of the array ");
        scanf("%d",&a[i]);
    }
    low=0;
    high=n-1;
    mid=(low+high)/2;
    while(low<=high)
    {
        if(a[mid]<key)
        {
          low=mid+1;
        }
        else if(a[mid]==key)
        {
            printf("The element was found at %d",mid+1);
            break;
        }
        else
        {
            high=mid-1;
        }
        mid=(low+high)/2;
        
    }
        while(low>high)
        {
            printf("The elemet was not found");
        }
    return 0;
}