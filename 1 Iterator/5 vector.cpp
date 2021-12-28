#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
    vector<int> vec;
    vector<int> ::iterator it;
    it = vec.begin();
    for(int i=1;i<=6;i++)
    {
        vec.push_back(i);
    }
    for(it=vec.begin();it!=vec.end();it++)
    {
        cout<<*it<<endl;
    }

}
