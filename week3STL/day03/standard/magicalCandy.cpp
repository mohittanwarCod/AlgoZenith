#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n,k;
    cin>>n>>k;
    priority_queue<ll> pq;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        pq.push(x);
    }
    int cnt=0;
    while(k--){
        ll x=pq.top();
        pq.pop();
        pq.push(x/2);
        cnt+=x;
    }
    cout<<cnt<<'\n';
    

    

};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}
