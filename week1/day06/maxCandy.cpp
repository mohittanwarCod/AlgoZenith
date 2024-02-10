#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,b;
    cin>>n>>b;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    int i =0;
    int ans = 0;
    while(b && i<n){
        if(b-arr[i]>=0) ans++,b-=arr[i];
        i++;

    }
    cout<<ans<<'\n';
};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}