#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
typedef long long ll;
void solve(){
    int n,m,q;
    cin>>n>>m>>q;
    ll arr[n+2][m+2];
    for(int i=0;i<=n+1;i++){
        for(int j=0;j<=m+1;j++){
            arr[i][j]=0;
        }
    }
    while(q--){
        ll u,l,d,r,c;
        cin>>u>>l>>d>>r>>c;
        // arr[u][l]=(arr[u][l]%mod+c%mod)%mod;
        // arr[u][r+1]=(arr[u][r+1]%mod - c%mod)%mod;
        // arr[d+1][l]=(arr[d+1][l]%mod - c%mod)%mod;
        // arr[d+1][r+1]=(arr[d+1][l+1] + c);

         arr[u][l]+=c;
        arr[u][r+1]-=c;
        arr[d+1][l]-=c;
        arr[d+1][r+1]+=c;




    }
    ll maxi= LLONG_MIN;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            arr[i][j]=(arr[i][j]+arr[i-1][j]+arr[i][j-1]-arr[i-1][j-1]);
            // ll x1=(arr[i][j]%mod+arr[i-1][j]%mod)%mod;
            // ll x2 = (x1%mod+arr[i][j-1]%mod)%mod;
            // ll x3 = (x2%mod-arr[i-1][j-1]%mod)%mod;
            
            // arr[i][j]=x3;
            
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(arr[i][j]>=maxi) maxi = arr[i][j];
        }
    }
    int cnt=0;
      for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(arr[i][j]==maxi) cnt++;
        }
    }
    cout<<maxi<<" "<<cnt<<endl;


};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      //int _t; cin>>_t;while(_t--)
      solve();
}