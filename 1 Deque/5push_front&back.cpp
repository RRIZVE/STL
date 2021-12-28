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
    dq.push_front(2);//2 1
    dq.push_front(3);//3 2 1
    dq.push_front(4);//4 3 2 1

    //front mana samna/aga

    cout<<"first element is : "<<dq.front()<<endl<<endl;//4 haba

    dq.push_back(5);//4 3 2 1 5
    dq.push_back(6);//4 3 2 1 5 6
    dq.push_back(7);//4 3 2 1 5 6 7
    dq.push_back(8);//4 3 2 1 5 6 7 8

    //back mana lastta/ses a

    cout<<"last elemt is : "<<dq.back()<<endl<<endl;;//8 haba

    while(!dq.empty())
    {
        cout<<dq.front()<<"  ";
        dq.pop_front();
    }












    return 0;
}
