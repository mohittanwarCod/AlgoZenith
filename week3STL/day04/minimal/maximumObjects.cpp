#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll n,k;
    cin>>n>>k;
    
    ll arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int i=0;
    int cnt=0;
    sort(arr,arr+n);
    while(k>0 && i<n){
        if(k-arr[i]>=0) {
            cnt++;
            k-=arr[i];
        }else {
            break;
        }
        i++;


    }
    cout<<cnt<<'\n';
};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}