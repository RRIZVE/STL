// Insertion sort
#include<iostream>
using namespace std;
int main()
{
    int i,j,k,arr[100],n,temp;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<n; i++)
    {

        for(j=0; j<n-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

        }

    }
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<"  ";
    }
}
