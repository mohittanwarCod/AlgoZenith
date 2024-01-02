#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n,m;
   map<ll,ll> x;
   cin>>n>>m;
   for(int i=0;i<n;i++){
    ll x1,u1;
    cin>>x1>>u1;
    x[x1*u1]++;

   }
   ll cnt=0;
   for(int i=0;i<m;i++){
    ll y,v;
    cin>>y>>v;
    ll yv = y*v;
    
    if(x.find(yv)!=x.end() && x[yv]!=0){
        cnt++;
        x[yv]--;
    }

   }
   cout<<cnt<<'\n';

};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}