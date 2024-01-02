#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
typedef long long ll;
void solve(){
    int n,q;
    cin>>n>>q;
    ll arr[n+1];
    arr[0]=0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    ll arr_b[n+1];
    for(int i=1;i<=n;i++){
        arr_b[i]=arr[i]*i;
    }
    // prefix sum for a[i]
    for(int i=2;i<=n;i++){
        arr[i]=(arr[i-1]%mod+arr[i]%mod)%mod;
    }
     //  prefix array for b[i]
    for(int i=2;i<=n;i++){
        arr_b[i]=(arr_b[i-1]%mod+arr_b[i]%mod)%mod;

    }
    arr_b[0]=0;

    while(q--){
        int l,r;
        cin>>l>>r;
        ll a_lr=arr[r]-arr[l-1];
        ll b_lr = arr_b[r]-arr_b[l-1];
        a_lr = ((1-l)%mod * a_lr%mod)%mod;


        ll ans = (a_lr%mod + b_lr%mod)%mod;
        

        cout<< ((ans%mod)+mod)%mod<<endl;
        

    }


};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      //int _t; cin>>_t;while(_t--)
      solve();
}