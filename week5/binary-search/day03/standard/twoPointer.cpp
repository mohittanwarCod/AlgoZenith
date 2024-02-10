#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    // Ds for two  pointer condition checking
    int cntzero = 0;
    // pointers
    int head = -1,tail=0;
    int ans = 0;
    while(tail<n){
        // while there is a next element to take and we will not violate any condition
        while(head+1<n && ((arr[head+1]==1 && cntzero<=k) || (arr[head+1]==0 && cntzero<k))){
            head++;
            if(arr[head]==0) cntzero++;

        }
        // update the ans accordingly
        ans = max(ans,head-tail+1);
        // move the tail head and remove tha last element's contribution
        if(head>=tail){
            if(arr[tail]==0) cntzero--;
            tail++;
        }else{
            //when we zero elements in window 
            tail++;
            head=tail-1;

        }
    }
    cout<<ans\n;
};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}