#include <bits/stdc++.h>
using namespace std;
#define int long long
int arr[100001];
int check(int mid){
    if(arr[mid]<arr[0]) return 1; // 4 5 1 2 3 for not equal
    return 0;
    
}
void solve(){
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++) cin>>arr[i];
    int low =0;
    int high = n-1;
    int ans = 0;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(check(mid)){
            ans = mid;
           high = mid-1;
        }else {
            low = mid+1;
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