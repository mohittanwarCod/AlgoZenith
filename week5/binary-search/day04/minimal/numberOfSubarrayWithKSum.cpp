#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    // ds for condition
    int currSum = 0;
    //
    int head = -1;
    int tail = 0;
    int ans = 0;
    while(tail<n){
        while(head+1<n && ((arr[head+1]==0 && currSum<=k)||(arr[head+1]+currSum<=k))){
            head++;
            if(arr[head]+currSum<=k) currSum+=arr[head];

        }
        ans += (head-tail+1);
        if(head>=tail){
            currSum-= arr[tail];
            tail++;

        }else{
            tail++;
            head=tail-1;
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