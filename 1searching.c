#include<stdio.h>
int main()
{
    int a[20],n,i,key;
    printf("The value of key. ");
    scanf("%d",&key);
    printf("Entre the value of n ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Entre the value of elements ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("The element found at %d",i);
            break;
        }
    }
    if(i==n)
    {
        printf("The element not found.");
    }
    return 0;
}