#include <bits/stdc++.h>
using namespace std;
#define int long long
   
   

// Different from template

// void solve(){
    
//     int n;
//      cin>>n;
//     int arr[n];
//     set<int> s;

//     for(int i=0;i<n;i++) cin>>arr[i],s.insert(arr[i]);
//     int k = s.size();
//     int ans = INT_MAX;
//     int distinctEl = 0;
//     int head = 0;
//     int tail = 0;
//     // int ans = 0;
//     map<int,int> m;
//     while(head<n){
//        while(head<n && distinctEl<k){
//         if(m[arr[head]]==0) distinctEl++;
//         m[arr[head]]++;
//         head++;
//        }

//        while(distinctEl==k){
//         ans = min(ans,head-tail);
//         if(m[arr[tail]]==1) distinctEl--;
//          m[arr[tail]]--;
//          tail++;

//        }

       

//     }

//     cout<<ans<<'\n';
    
    

// }
void solve(){
      int n;
     cin>>n;
    int arr[n];
    set<int> s;

    for(int i=0;i<n;i++) cin>>arr[i],s.insert(arr[i]);
    int x = s.size();
    int ans = n;
    int distinctEl = 0;
    int head = -1;
    int tail = 0;
    map<int,int> m;
    while(tail<n){
      while(head+1<n && m.size()<x){
        head++;
        m[arr[head]]++;
      }
      // check if no of distinct element is x
      if(m.size()==x){
        // check the subarray and update if new subarray is shoreter
        ans = min(ans,head-tail+1);
      }
      // update tail and head values and update map values
      if(head>=tail){
        m[arr[tail]]--;
        if(m[arr[tail]]==0) m.erase(arr[tail]);
        tail++;
      }else{
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