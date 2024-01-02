#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n;
    cin>>n;
    ll arr[n+1];
    stack<pair<ll,ll>> s;
    for(int i=1;i<=n;i++){
        cin>>arr[i];

    }
    for(int i=1;i<=n;i++){
        while(!s.empty() && s.top().first>=arr[i]){
            s.pop();
        }
        if(s.empty()) cout<<0<<" ";
        else cout<<s.top().second<<" ";
        s.push({arr[i],i});
        
    }
    cout<<endl;

};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}