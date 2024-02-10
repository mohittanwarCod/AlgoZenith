#include <bits/stdc++.h>
using namespace std;
#define int long long 
int freq[1000100];
 int arr[1000100];
void solve(){
      int n;
      int k;
      cin>>n>>k;
     
      for(int i=0;i<n;i++) cin>>arr[i];
     
      int distinctEl = 0;
      int ans = 1e9;
      int head = -1,tail=0;
 
    while(tail<n){
        // while there is a next element to take and we will not violate any condition
        while(head+1<n && (head+1-tail+1<=k) ){
            head++;
            freq[arr[head]]++;
            if(freq[arr[head]]==1) distinctEl++;
        }
        // update the ans accordingly
        if(head-tail+1==k) ans = min(ans,distinctEl);
       
        // move the tail head and remove tha last element's contribution
        if(head>=tail){
            freq[arr[tail]]--;
            if(freq[arr[tail]]==0) distinctEl--;
            tail++;
        }else{
            //when we zero elements in window 
            tail++;
            head=tail-1;

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



