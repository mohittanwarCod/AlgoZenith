#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
ll fact[200002];
void factVal(){
    fact[0]=1;
    for(ll i=1;i<=200001;i++){
      fact[i]=(i*fact[i-1])%mod;
    }
}
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
   
    ll n,m;
    cin>>n>>m;
    
    ll nfact = fact[n];
    ll mfact = fact[m];
    ll nmFact = fact[n+m];
    ll nInverse = binPow(nfact,mod-2,mod);
    ll mInverse = binPow(mfact,mod-2,mod);
    ll ans = (nmFact%mod*nInverse%mod*mInverse%mod)%mod;
    cout<<ans<<'\n';
    

};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      factVal();
      int _t; cin>>_t;while(_t--)
      solve();
}