#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
typedef long long ll;

ll expo(ll a, ll x, ll p)  //(a^x)%p
{
  ll n, ans = 1;
  // prod= (a^(2^p1))
  while (x) {
    if (x % 2) {
      ans = ((ans % p) * (a % p)) % p;
    }
    a = ((a % p) * (a % p)) % p;
    x = x / 2;
  }
  return ans;
}
void solve(){

    ll n,q,k;
    cin>>n>>q>>k;

    ll arr[n+1];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }

    ll kInv[n+1];
    
    ll kinv1 = expo(k,MOD-2,MOD);
    
    // cout<<kinv1<<" "<<k<<" "<<endl;
    kInv[1]=kinv1;
    for(int i=2;i<=n;i++){
        kInv[i]=(kinv1%MOD*kInv[i-1]%MOD)%MOD;

    }
     arr[0]=0;
    //  arr[1]=kinv1*arr[1];
    for(int i=2;i<=n;i++){
        ll ki = expo(k,i,MOD);
        arr[i]=(arr[i]%MOD*ki%MOD)%MOD;
        arr[i]=(arr[i]%MOD+arr[i-1]%MOD)%MOD;

    }
    while(q--){
        ll l,r;
        cin>>l>>r;
        ll kl_ = kInv[l];
        // cout<<"kinverse"<<" "<<kl_<<endl;
        ll ans = arr[r]-arr[l-1];
        ans = (kl_%MOD*ans%MOD)%MOD;
        cout<<((ans%MOD)+MOD)%MOD<<endl;
    }

};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      //int _t; cin>>_t;while(_t--)
      solve();
}