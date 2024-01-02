#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n,q;
    cin>>n>>q;
    ll arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    for(int i=1;i<n;i++){
        arr[i]+=arr[i-1];
    }
    
    while(q--){
        int k;
        cin>>k;
        int ans = upper_bound(arr,arr+n,k)-arr;
        cout<<ans<<'\n';
    }

};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      //int _t; cin>>_t;while(_t--)
      solve();
}