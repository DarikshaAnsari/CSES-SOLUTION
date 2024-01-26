#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)


int main(){
   string s;
   cin>>s;
   int k=1;
   int ans=0;
   for(int i=1;i<s.size();i++){
    if(s[i]==s[i-1]){
        k++;
    }else{
        ans=max(ans,k);
        k=1;
    }
   }
   ans=max(ans,k);
   cout<<ans<<endl;
   return 0;
}