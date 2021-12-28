#include<iostream>
#include<set>
using namespace std;
int main()
{
    int i,j,n,a[100];
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    set<int> myset;
    for(i=0; i<n; i++)
    {
        myset.insert(a[i]);
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<endl<<endl;

    cout<<myset.size();

}

