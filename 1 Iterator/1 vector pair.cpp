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
	vector<pair<ll, ll>>v;
	cin >> n ;
	for ( i = 1; i <= n ; i++)
	{
		cin >> a[i];
		v.push_back({a[i], i});

	}
	vector<pair<ll, ll>>::iterator it;

	it = v.begin();

	for ( i = 1; i <= n ; i++, it++)
	{
		cout << it->first << " " << it->second << endl;

	}

	/*

	5
	10 20 30 40 50

	10 1
	20 2
	30 3
	40 4
	50 5

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