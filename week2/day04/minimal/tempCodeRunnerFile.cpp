#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
ll fact[200002];
long long binPow(long long a,long long b,int mod){
      long long res=1;
      while(b>0){
         if(b&1)
            res = (res%mod*a%mod)%mod;
        a=(a%mod*a%mod)%mod;
        b=b>>1;
       }
   return res; 
}
void solve(){
    fact[0]=1;
    ll n,m;
    cin>>n>>m;
    for(ll i=1;i<=n+m;i++){
      fact[i]=(i%mod*fact[i-1]%mod)%mod;
    }
    ll nfact = fact[n];
    ll mfact = fact[m];
    ll nmFact = fact[n+m];
    ll nInverse = binPow(nfact,mod-2,mod);
    ll mInverse = binPow(mfact,mod-2,mod);
    ll ans = (nfact%mod*nInverse%mod*mInverse%mod)%mod;
    cout<<ans<<'\n';
    

};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}