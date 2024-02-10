#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int> v;
int n,k;
bool check(int x){
    int needed = 1;
    int timegiven = v[0];   // 1 2 3 4 5
    int left = x-timegiven;
    for(int i=1;i<n;i++){
        if(v[i]<=left){
            left = left-v[i];
        }else{
                needed++;
                left=x;
                if(v[i]>left){
                    return false;
                }
                left -= v[i];
            
        }
    }
    
    return needed<=k;
}
void solve(){
    cin>>n>>k;
    v.resize(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int low = 0 ;
    for(int i=0;i<n;i++) low = max(low,v[i]);
    int high = 0;
    for(int i=0;i<n;i++) high+= v[i];
    int ans = -1;
    while(low<=high){
        int mid = low+(high-low)/2;
        
        if(check(mid)){
            ans = mid;
           
            high=mid-1;
        }else{
            low=mid+1;
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