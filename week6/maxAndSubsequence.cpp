#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n,x;
    cin>>n>>x;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int ans = 0;
    for(int i=32;i>=0;i--){
      vector<int> elementSetBit;
      for(auto v:arr){
        if((v>>i)&1) elementSetBit.push_back(v);
      }
     if(elementSetBit.size()>=x){
        ans+= (1LL<<i);
        arr=elementSetBit;
     }
    }
    cout<<ans<<'\n';

}
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}