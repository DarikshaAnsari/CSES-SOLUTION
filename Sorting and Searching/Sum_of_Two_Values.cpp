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
#define fr(i, a, b) for (ll i = a; i < b; i++)

int main()
{
    ll n;
    cin >> n;
    ll x;
    cin >> x;
    vector<pair<ll,ll>> v(n);
    fr(i,0,n){
        cin>>v[i].f;
        v[i].s=i+1;
    }
    sort(v.begin(),v.end());
    int i=0,j=n-1;
    while(i<j){
        if(v[i].f+v[j].f==x){
            cout<<v[i].s<<" "<<v[j].s<<endl;
            return 0;
        }else if(v[i].f+v[j].f<x){
            i++;
        }else{
            j--;
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
}