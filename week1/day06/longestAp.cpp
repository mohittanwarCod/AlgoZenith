#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int cnt = 2 ;
    int ans = INT_MIN;
    for(int i=0;i+2<n;i++){
        if(arr[i+1]-arr[i]==arr[i+2]-arr[i+1] )cnt++;
        else {
            ans = max(ans,cnt);
            cnt=2;
            
        }
        
        
    }
    ans=max(ans,cnt);
    cout<<ans<<'\n';
};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}