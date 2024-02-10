#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
typedef long long ll;
long long binPow(long long a,long long b,long long mod){
      long long res=1;
      while(b>0){
         if(b&1)
            res = (res%mod*a%mod)%mod;
        a=a*a;
        b=b>>1;
       }
   return res; 
}
void solve(){
    ll n,q,r;
    cin>>n>>q>>r;
    ll r_pow[n+1]={};
    r_pow[0]=1;
    // r_pow[1]=binPow(r,1,mod);
    r_pow[1]=r;
    for(int i=2;i<=n;i++){
        r_pow[i]=((r%mod)*(r_pow[i-1]%mod))%mod;

    }


    ll arr[n+2]={};
    while(q--){
        ll a,L,R;
        cin>>a>>L>>R;
        arr[L]+=a;
        arr[R+1]-=((a%mod)*(r_pow[R-L+1]%mod))%mod;

    }
    for(int i=1;i<=n;i++){
        ll rpowi =  ((r_pow[1]%mod*arr[i-1]%mod)%mod);
        arr[i]=(arr[i]%mod + rpowi%mod)%mod;
        cout<<((arr[i]%mod)+mod)%mod<<" ";
    }

};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      //int _t; cin>>_t;while(_t--)
      solve();
}