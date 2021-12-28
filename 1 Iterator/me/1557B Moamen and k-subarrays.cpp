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
	int t;
	cin >> t;
	while (t--)
	{

		int i, j, k , n, m, x, y, z, c = 1, cnt = 0;
		string s;
		vector<pair<ll, ll>>v;
		cin >> n >> k;
		for ( i = 1; i <= n ; i++)
		{
			cin >> a[i];
			v.push_back({a[i], i});

		}
		sort(v.begin(), v.end());
		vector<pair<ll, ll>>::iterator it, it1;

		it = v.begin();
		it1 =  v.begin();
		it1++;

		for ( i = 1; i <= n - 1  ; i++, it++, it1++)
		{
			if (it->second + 1 != it1->second )
			{
				c++;
			}

		}
		if (k >= c)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}



















	}

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