#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef pair<int, int> pi;
typedef unordered_map<ll,ll> mpp;
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define fr(i, a, b) for (ll i = a; i < b; i++)

int main()
{
    ll n, m;
	cin >> n >> m;
	multiset<ll> h;
	fr (i,0,n)
	{
		ll price;
		cin >> price;
		h.insert(price);
	}
	fr (i,0,m)
	{
		ll t;
		cin >> t;

		auto it = h.upper_bound(t);
		if (it == h.begin())
		{
			cout << -1 << endl;
			continue;
		}
		else
		{
			cout << *(--it) << endl;
			h.erase(it);
		}
	}
    return 0;
}