#include <bits/stdc++.h>
using namespace std;
#define int long long 
struct monotone_deque{
    deque<int> dq;
    void insert(int x){
        while(!dq.empty()&& x>dq.back()){
            dq.pop_back();
        }
        dq.push_back(x);


    }
    void remove(int x){
        if(dq.front()==x){
            dq.pop_front();
        }
    }
    int getMin(){
        return dq.front();
    }
};
void solve(){
    int n,k;
    cin>>n>>k;
    monotone_deque maxDiffInwindow;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int diff[n-1];
    for(int i=1;i<n;i++){
        diff[i-1]=arr[i]-arr[i-1];
    }
    
    int ans = 2e9;
    int window = n-k-1;
    
    for(int i=0;i<n-1;i++){
        maxDiffInwindow.insert(diff[i]);
        if(i-window>=0) maxDiffInwindow.remove(diff[i-window]);
        if(i>=window-1) ans = min(ans,maxDiffInwindow.getMin());
        
    }
    cout<<ans<<'\n';

}
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}