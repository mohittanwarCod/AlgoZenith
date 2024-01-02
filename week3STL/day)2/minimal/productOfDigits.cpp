#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
typedef long long ll;


void solve(){
    ll n;
    cin>>n;
    int ans = 1;
    while(n--){
        ll i;
        cin>>i;
        ans = (ans%mod * i%mod)%mod;
    }
    cout<<ans<<endl;

    

};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}