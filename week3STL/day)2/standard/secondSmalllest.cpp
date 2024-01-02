#include <bits/stdc++.h>
using namespace std;
void solve(){
   int q;
   cin>>q;
   int arr[q];
   for(int i=0;i<q;i++){
    cin>>arr[i];
   }
   set<int> s;
   for(int i=0;i<q;i++){
    s.insert(arr[i]);
   }
   if(s.size()>=2){
    
    auto it = s.begin();
    it++;
    cout<<*it<<'\n';
   }else{
    cout<<-1<<'\n';
   }

};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}