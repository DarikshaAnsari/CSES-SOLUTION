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
    ll n;
    cin >> n;
    vl v(n);
    fr(i, 0, n)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    ll target = 1;
    fr(i,0,n)
    {
      if(v[i]>target){
        break;
      }  
      target+=v[i];
    }
    cout<<target<<endl;
    return 0;
}