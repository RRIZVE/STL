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



    cout<<endl<<endl<<s.size()<<endl<<endl;

    s.erase(1);

    cout<<endl<<endl<<s.size()<<endl<<endl;

    for(auto u:s)
    {
        cout<<u<<"  ";//2  2  3  3  4  4  5
    }


}
