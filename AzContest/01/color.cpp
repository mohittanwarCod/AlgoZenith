#include <bits/stdc++.h>
using namespace std;
#define int long long 
const int mod = 1e9+7;
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
    int n,m;
    cin>>n>>m;
    int m_1pow_n=binPow(m-1,n-1,mod);
    int ans = (m%mod*m_1pow_n%mod)%mod;
    cout<<((ans%mod)+mod)%mod<<'\n';


};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}
