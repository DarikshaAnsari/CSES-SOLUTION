#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef pair<int, int> pi;
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define fr(i, a, b) for (int i = a; i < b; i++)

int main()
{
    ll n, x;
	cin >> n >> x;
	vl v(n);
	for (ll i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end(),greater<long long>());
	ll no_of_gondolas = 0;
	ll j= n - 1;
    ll i=0;
	while(i<=j)
	{
		if ((v[i] + v[j]) <= x)
		{
			j--;
			no_of_gondolas++;
		}
		else
		{
			no_of_gondolas++;
		}
        i++;
	}
	cout << no_of_gondolas << endl;
    return 0;
}