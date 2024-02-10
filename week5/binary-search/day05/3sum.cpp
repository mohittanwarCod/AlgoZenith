#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;
    int t;
    cin>>n>>t;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    int ans = LONG_LONG_MAX;
    for(int j=0;j<n;j++){
        int i = 0;
        int k = n-1;
        
        while(i<j && j<k){
            int x = arr[i]+arr[j]+arr[k];
            
            ans = min(abs(x-t),ans);
            
            if(x>t){
                k--;
            }else{
                i++;
            }
        }
            
    }
    cout<<ans<<'\n';
};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}