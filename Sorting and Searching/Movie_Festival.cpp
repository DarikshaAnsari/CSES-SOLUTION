#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef pair<int, int> pi;
typedef unordered_map<ll, ll> mpp;
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define fr(i, a, b) for (int i = a; i < b; i++)

int main()
{
    int n;
    cin >> n;
    vector<pi> v(n);
    fr(i, 0, n)
    {
        cin >> v[i].f >> v[i].s;
    }
    sort(v.begin(), v.end());
    int i = 1, current = v[0].second;
    int ans = 1;
    while (i < n)
    {
        if (v[i].f >= current)
        {
            current = v[i].s;
            ans++;
        }
        else
        {
            current = min(current, v[i].s);
        }
        i++;
    }
    cout << ans << endl;
    return 0;
}