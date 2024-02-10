#include <bits/stdc++.h>
using namespace std;
#define int long long 
void solve(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    

    // Ds for two  pointer condition checking
   map<int,int> m;
    // pointers
    int head = -1,tail=0;
    int ans = 0;
    while(tail<n){
        // while there is a next element to take and we will not violate any condition
        while(head+1<n && (((m.find(arr[head+1])!=m.end())&& m.size()<=k) || ((m.find(arr[head+1])==m.end()) && m.size()<k))){
            head++;
            // if(m.find(arr[head]) == m.end()) m[arr[head]]++;
            m[arr[head]]++;



        }
        // update the ans accordingly
        ans += (head-tail+1);
        // move the tail head and remove tha last element's contribution
        if(head>=tail){
            if(m[arr[tail]]>1) m[arr[tail]]--;
            else m.erase(arr[tail]);
            
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