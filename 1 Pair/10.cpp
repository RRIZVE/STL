#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int>p[]= {{1,5},{2,5},{3,6},{7,2},{7,1}};
    sort(p,p+5);
    for(auto u : p)
    {
        cout<<u.first<<"  "<<u.second<<endl;
    }
    /**
    1 5
    2 5
    3 6
    3 6
    7 1
    7 2

    */
}
