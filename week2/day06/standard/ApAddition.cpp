#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
void solve(){
    ll n,q;
    cin>>n>>q;
    ll arr[n+2];
    ll a1[n+2];
    ll b[n+2];
    for(int i=0;i<=n+1;i++){
        arr[i]=0;
        a1[i]=0;
        b[i]=0;
    }
   
    
    while(q--){
        ll a,d,l,r;
        cin>>a>>d>>l>>r;
        ll ld= ((l%mod)*(d%mod))%mod;
        a1[l] +=(a-ld);
        a1[r+1]-=(a-ld);
        
        b[l]+= d;
        b[r+1]-=d;
        

    }
    for(int i=1;i<=n;i++){
        a1[i]= (a1[i]%mod+a1[i-1]%mod)%mod;
        b[i]=(b[i]%mod+b[i-1])%mod;
    }
    for(int i=1;i<=n;i++){
        ll ib = ((i)%mod)*(b[i]%mod)%mod;
       arr[i]=(a1[i]+ib)%mod;
    }
    for(int i=1;i<=n;i++){
        cout<<((arr[i]%mod)+mod)%mod<<" ";
    }
    cout<<"\n";

};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      //int _t; cin>>_t;while(_t--)
      solve();
}