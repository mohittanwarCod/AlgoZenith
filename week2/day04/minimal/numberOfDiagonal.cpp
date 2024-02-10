#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9+7;
long long binPow(long long a,long long b,ll mod){
      long long res=1;
      while(b>0){
         if(b&1)
            res = (res*a)%mod;
        a=(a*a)%mod;
        b=b>>1;
       }
   return res; 
}
void solve(){
    ll n;
    cin>>n;
    ll ans = (n%mod*(n-3)%mod)%mod;
    ll twoInv = binPow(2,mod-2,mod);
    ans = (ans%mod*twoInv%mod)%mod;
    cout<<ans<<"\n";
    

};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}