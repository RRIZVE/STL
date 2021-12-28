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
    dq.push_front(1);//1
    dq.push_front(2);//21
    dq.push_front(3);//321
    dq.push_back(4);//3214
    dq.push_back(5);//32145
    dq.push_front(6);//632145


    //6 3 2 1 4 5

    cout<<dq.front()<<"  "<<dq.back()<<endl;//6  5
    dq.pop_front();
    cout<<dq.front()<<"  "<<dq.back()<<endl;//3  5
    dq.pop_back();
    cout<<dq.front()<<"  "<<dq.back()<<endl;//3  4

    //3214

    cout<<dq.size()<<endl;//4
    cout<<dq.empty()<<endl;//0













    return 0;
}
