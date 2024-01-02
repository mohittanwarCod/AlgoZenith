#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll q;
    cin>>q;
    vector<ll> v;
    while(q--){
        string query;
        cin>>query;
        if(query=="add"){
            ll n;
            cin>>n;
            v.push_back(n);


        }else if(query=="remove"){
            v.pop_back();

        }else if(query=="print"){
            ll x;
            cin>>x;
            if(x>=v.size()) cout<<0<<endl;
            else cout<<v[x]<<endl;

        }else if(query=="clear"){
            v.resize(0);

        }
    }

};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}