#include<iostream>
using namespace std;
int main()
{
    int i,j,k,arr[100],n,m,a,b,c,x;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    x=n/m;
    a=0;
    b=m;
    c=2;
    for(k=1;k<=x;k++)
    {
       for(i=b;i>a;i--)
       {
           cout<<arr[i]<<" ";
       }
       a=k*m;
       b=c*m;
       c++;

    }
    for(i=n;i>a;i--)
    {
        cout<<arr[i]<<" ";
    }

}
