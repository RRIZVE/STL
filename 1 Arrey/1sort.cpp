#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]= {4,8,6,10,2,45,36,7},i;
    for(i=0; i<8; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;;
    sort(arr,arr+8);
    for(i=0; i<8; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int a[100],n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<endl;;
}
