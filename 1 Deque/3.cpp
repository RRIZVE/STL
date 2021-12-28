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
    deque<int>dq;
    dq.push_front(1);//1 2
    dq.push_front(2);//1 2
    dq.push_front(3);//1 2
    dq.push_back(4);//1 2 3
    dq.push_back(5);//1 2 3
    dq.push_front(6);//1 2


    //6 3 2 1 4 5

    cout<<dq.front()<<endl;//6 haba
    cout<<dq.back()<<endl;//5 haba











    return 0;
}
