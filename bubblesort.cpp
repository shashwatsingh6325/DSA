#include<iostream>
using namespace std;
int main()
{
    int i,j,n,temp,arr[100];
    cout<<"Enter the value of number of elements in the array.";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter the elements of the array.";
        cin>>arr[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"The sorted array is ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}