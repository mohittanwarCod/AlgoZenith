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
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int fact[n+1];
    fact[0]=1;
     for(int i=1;i<=n;i++){
      fact[i]=(i%mod*fact[i-1]%mod)%mod;
    }
    int pre[n+1];
    pre[0]=1;
    pre[1]=1;
    pre[n]=1;
    int nfact = fact[n];
    int nInverse = binPow(nfact,mod-2,mod);
    for(int i=2;i<=n;i++){
    
    int ifact = fact[i];
    int iInverse = binPow(ifact,mod-2,mod);

    int nifact = fact[n-i];
    int niInverse = binPow(nifact,mod-2,mod);

    int ifact_nfact = (nfact%mod*iInverse%mod)%mod;
    int ifact_nfact_ni = (ifact_nfact%mod*niInverse%mod)%mod;

    int  idistance= (ifact_nfact_ni%mod*(i-1)%mod)%mod;
    pre[i]=(idistance%mod+pre[i-1]%mod)%mod;



    
    }
   
    int q;
    cin>>q;
    while(q--){
        int val;
        cin>>val;
        cout<<pre[val]<<'\n';
    }
    

};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      //int _t; cin>>_t;while(_t--)
      solve();
}