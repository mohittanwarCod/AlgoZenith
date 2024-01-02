#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int q;
    cin>>q;
    set<ll> s;
    set <ll> ns;

    while(q--){
        ll x1,x2;
        cin>>x1>>x2;
        if(x1==1){
            s.insert(x2);
            ns.erase(x2);
            if(s.find(x2+1)==s.end()) ns.insert(x2+1);
            
        }else{
            if(s.find(x2)==s.end()) cout<<x2<<'\n';
            else {
                auto it = ns.lower_bound(x2);
                cout<<*it<<'\n';
            }
        }

    }
};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}