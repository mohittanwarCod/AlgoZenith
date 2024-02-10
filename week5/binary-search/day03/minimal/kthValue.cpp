#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int> arr;
vector<int> brr;
int n,m,k;
bool check(int x){
    int num_greater=0;
    for(int i=0;i<n;i++){
        num_greater+= upper_bound(brr.begin(),brr.end(),x-arr[i])-brr.begin();
    }
    
    return num_greater>=k;
}
void solve(){
    cin>>n>>m>>k;
    arr.resize(n);
    brr.resize(m);
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int j=0;j<m;j++) cin>>brr[j];
    if(n>m){
        swap(n,m);
        swap(arr,brr);

    }
    sort(arr.begin(),arr.end());
    sort(brr.begin(),brr.end());
    int low = arr[0]+brr[0];
    int high = arr.back()+brr.back();
    int ans = -1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(check(mid)){
            ans = mid;
            high=mid-1;
        }else {
            low=mid+1;
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