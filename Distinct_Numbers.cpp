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
    int n;
    cin >> n;
    set<ll> st;
    while(n--){
        ll k;
        cin>>k;
        st.insert(k);
    }
    cout<<st.size();
    return 0;
}