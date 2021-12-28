#include<iostream>
#include<set>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;

        int a[n];

        for(int i=0;i<n;i++)
        cin>>a[i];

       set<int> s(a,a+n);  //set only stores distinct elements
       int sum=0;
       for(auto i=s.begin();i!=s.end();++i)
       sum=sum+(*i);

        cout<<sum<<endl;
    }

    return 0;}
