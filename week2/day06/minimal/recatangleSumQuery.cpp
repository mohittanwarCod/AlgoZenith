#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
typedef long long ll;
void solve(){
    ll n,m,q;
    cin>>n>>m>>q;
    ll arr[n+1][m+1];
    for(int i=0;i<=n;i++) arr[i][0]=0;
    for(int j=0;j<=m;j++) arr[0][j]=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            ll x1 = (arr[i][j]%MOD+arr[i-1][j]%MOD)%MOD;
            ll x2 = (arr[i][j-1]%MOD - arr[i-1][j-1]%MOD)%MOD;
            arr[i][j]=(x1%MOD + x2%MOD)%MOD;
        }
    }
  
    while(q--){
        ll u,l,d,r;
        cin>>u>>l>>d>>r;
        ll x1 = (arr[d][r]%MOD-arr[u-1][r]%MOD)%MOD;
        ll x2 = (arr[u-1][l-1]%MOD-arr[d][l-1]%MOD)%MOD;
        ll ans = (x1%MOD + x2%MOD)%MOD;
        cout<<((ans%MOD)+MOD)%MOD<<endl;
    }
};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      //int _t; cin>>_t;while(_t--)
      solve();
}