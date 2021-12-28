#include<bits/stdc++.h>
using namespace std;

//uniq korba na kintu sort kora
int main()
{
    multiset<int> s;

    s.insert(4);
    s.insert(5);
    s.insert(1);
    s.insert(1);
    s.insert(2);
    s.insert(1);
    s.insert(2);
    s.insert(4);
    s.insert(3);
    s.insert(3);



    auto it=s.find(1);//ak ta element delete kora

    s.erase(it);

    cout<<endl<<endl<<s.size()<<endl<<endl;//9

    for(auto u:s)
    {
        cout<<u<<"  ";//1  1  2  2  3  3  4  4  5
    }


}
