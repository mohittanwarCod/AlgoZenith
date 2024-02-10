#include <bits/stdc++.h>
using namespace std;
#define int long long 
int arr[1002];
int n;
int t;
bool check(int x){
    bool ans = false;
    for(int j=0;j<n;j++){
        int i = 0;
        int k = n-1;
        
        while(i<j && j<k){
            if(arr[i]+arr[j]+arr[k]==x){
                ans = true;
                i++;
                k--;

            }else if(arr[i]+arr[j]+arr[k]>x){
                k--;


            }else{
                i++;
            }
        }
            
    }
    return ans;
}
void solve(){
    cin>>n>>t;
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    int low = arr[0]+arr[1]+arr[2];
    int high = arr[n-1]+arr[n-2]+arr[n-3];
    int ans = 0;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(check(mid)){
            ans = mid;
            high=ans-1;
        }else{
            low = ans+1;
        }
    }
    cout<< abs(ans-t)<<'\n';
};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}