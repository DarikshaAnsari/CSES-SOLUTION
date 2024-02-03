#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    map<int,int> mp;
    for(int i=1;i<=n;i++){
        mp[i]=-1;
    }
    for(int i=0;i<n-1;i++){
        int m;
        cin>>m;
        mp[m]=1;
    }
    for(auto x:mp){
        if(x.second==-1){
            cout<<x.first<<endl;
        }
    }
return 0;
}
