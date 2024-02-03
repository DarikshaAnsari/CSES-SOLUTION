#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define fr(i, a, b) for (int i = a; i < b; i++)

int main()
{
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(n);
    fr(i, 0, n)
    {
        cin >> a[i];
    }
    vector<ll> b(m);
    fr(i, 0, m)
    {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int ans=0;
    int i=0,j=0;
    while(i<n && j<m){
       if(b[j]-k<=a[i] && a[i]<=b[j]+k){
        i++;
        j++;
        ans++;
       }
       else if(a[i]>b[j]-k){
         j++;
       }else{
        i++;
       }
    }
    cout<<ans<<endl;
    return 0;
}