#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;
    cin>>n;
    map<int,int>m;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        m[x]++;
    }
    int ans=0;
    for(auto it:m){
        if(it.first != it.second) {
            if(it.second-it.first>0){
                ans+= it.second-it.first;
            }else{
                ans+=it.second;
            }
        }
    }
    cout<<ans<<'\n';


};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}