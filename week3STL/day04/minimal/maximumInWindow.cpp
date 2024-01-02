#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct monotone_deque{
    deque <ll> dq;
    void insert(ll x){
        while(!dq.empty() && dq.back()<x) dq.pop_back();
        dq.push_back(x);

    }
    void remove (ll x){
        if(dq.front()==x) dq.pop_front();
    }
    int getMax(){
        return dq.front();
    }

};
void solve(){
    int n,k;
    cin>>n>>k;
    monotone_deque md;
    ll arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    for(int i=0;i<n;i++){
        md.insert(arr[i]);
        if(i-k>=0) md.remove(arr[i-k]);
        if(i>=(k-1)) cout<<md.getMax()<<" ";

    }
    cout<<'\n';

};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}