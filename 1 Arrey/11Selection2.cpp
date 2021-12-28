//Selection sort
#include<iostream>
using namespace std;
int main()
{
    int i,j,k,arr[100],minIndex,n,temp;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        minIndex=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[minIndex]>arr[j])
            {
                minIndex=j;
            }
        }
        temp=arr[minIndex];
        arr[minIndex]=arr[i];
        arr[i]=temp;
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
}
