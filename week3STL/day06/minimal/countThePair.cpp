#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    ll ans =0;
    // **********THINKING TO FIND ELEMENTS FROM I+1 TO N
    for(int i=0;i<n;i++){
       auto it = upper_bound(arr,arr+n,x-arr[i]);
       ans+= it-arr;
       if(it>arr+i) ans--;  // it>= we don't use it because we are searching elements before this

    }
    
    //************Counting to check previous elements 
    // for(int  i=0;i<n;i++){
    //     if(arr[i]>x) break;
    //     int numOfElements = upper_bound(arr,arr+i,x-arr[i])-arr;
    //     ans += 2*numOfElements;
    // }    
    cout<<ans<<'\n';
};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}