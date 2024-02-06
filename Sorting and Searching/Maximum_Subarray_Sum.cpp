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
    vl v(n);
    fr(i,0,n){
        cin>>v[i];
    }
    ll local_maxima=0;
    ll global_maxima=INT_MIN;
    fr(i,0,n){
        local_maxima=max(v[i],local_maxima+v[i]);
        global_maxima=max(global_maxima,local_maxima);
    }
    cout<<global_maxima<<endl;
    return 0;
}