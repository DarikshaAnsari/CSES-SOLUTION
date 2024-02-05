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
    vl arrival(n), leave(n);
    fr(i, 0, n)
    {
        cin >> arrival[i];
        cin >> leave[i];
    }
    sort(arrival.begin(), arrival.end());
    sort(leave.begin(), leave.end());
    int i = 0, j = 0;
    int count = 0, maxi = INT_MIN;
    while (i < n && j < n)
    {
        if (arrival[i] < leave[j])
        {
            count++;
            i++;
        }
        else
        {
                j++;
                count--;
        }
        maxi = max(maxi, count);
    }
    cout<<maxi<< endl;
    return 0;
}