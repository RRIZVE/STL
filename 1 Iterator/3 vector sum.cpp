//***********************Bismillah-ir-Rahman-ir-Rahim******************************\
//In the Name of Allah
//La ilaha illallah Muhammadur Rasulullah
//Rabbir Hamhuma Kama Rabba Yani Sagheera

#include<bits/stdc++.h>
using namespace std;

#define Alhamdulillah ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

const int mx = 1e6;
int a[mx];



void solve()
{


	int i, j, k , n, m, x, y, z, c = 1, cnt = 0;
	string s;
	vector<ll>v;
	cin >> n ;
	for ( i = 1; i <= n ; i++)
	{
		cin >> x;
		v.push_back(x);


	}
	vector<ll>::iterator it, it1;

	it = v.begin();
	it1 = v.begin();
	it1++;

	for ( i = 1; i <= n - 1 ; i++, it++, it1++)
	{
		cout << *it + *it1  << endl;


	}

	/*

	5
	10 20 30 40 50

	30
	50
	70
	90






	*/









}



int main()
{

	Alhamdulillah;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	solve();
	return 0;

}