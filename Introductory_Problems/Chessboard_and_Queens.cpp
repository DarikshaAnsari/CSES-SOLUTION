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

void solve(int col,vector<vector<char>>& v,int& ans,vector < int > & leftrow, vector < int > & upperDiagonal, vector < int > & lowerDiagonal, int n) {
      if (col == n) {
        ans++;
        return;
      }
      for (int row = 0; row < n; row++) {
        if (v[row][col]!='*' && leftrow[row] == 0 && lowerDiagonal[row + col] == 0 && upperDiagonal[n - 1 + col - row] == 0) {
          v[row][col] = 'Q';
          leftrow[row] = 1;
          lowerDiagonal[row + col] = 1;
          upperDiagonal[n - 1 + col - row] = 1;
          solve(col + 1,v,ans, leftrow, upperDiagonal, lowerDiagonal, n);
          v[row][col] = '.';
          leftrow[row] = 0;
          lowerDiagonal[row + col] = 0;
          upperDiagonal[n - 1 + col - row] = 0;
        }
      }
    }
int main()
{
    vector<vector<char>> v(8,vector<char>(8));
    fr(i,0,8){
        fr(j,0,8){
            cin>>v[i][j];
        }
    }
    int n=8;
    int ans=0;
    vector < int > leftrow(n, 0), upperDiagonal(2 * n - 1, 0), lowerDiagonal(2 * n - 1, 0);
    solve(0,v,ans,leftrow, upperDiagonal, lowerDiagonal, n);
    cout<<ans<<endl;
    return 0;
}