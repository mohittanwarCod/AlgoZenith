#include <bits/stdc++.h>
using namespace std;
#define int long long 
const int mod  = 1e9+7;

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
    int n;
    cin>>n;
    int _26powN = binPow(26,n,mod);
    int _5powN = binPow(5,n,mod);
    int _21powN = binPow(21,n,mod); 
    int _521plus = (_5powN%mod+_21powN%mod)%mod;
    int ans = (_26powN%mod - _521plus%mod)%mod;
    cout<<((ans%mod)+mod)%mod<<'\n';

};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}