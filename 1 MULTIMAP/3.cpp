//In the Name of Allah
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    optimize();
    int i,j,k,n,t,x,y,z;
    string s;
    multimap<int,int>mp;

    mp.insert({1,2});
    mp.insert({3,4});
    mp.insert({3,5});
    mp.insert({4,3});
    mp.insert({3,5});
    mp.insert({1,2});

    multimap<int,int>::iterator it;

    for(it=mp.begin(); it!=mp.end(); it++)
    {
        cout<<it->first<<"  "<<it->second<<endl;
    }
    cout<<endl<<endl;
    mp.erase(1);
    for(it=mp.begin(); it!=mp.end(); it++)
    {
        cout<<it->first<<"  "<<it->second<<endl;
    }
    /*
    1  2
    1  2
    3  4
    3  5
    3  5
    4  3


    3  4
    3  5
    3  5
    4  3

    */






    return 0;
}
