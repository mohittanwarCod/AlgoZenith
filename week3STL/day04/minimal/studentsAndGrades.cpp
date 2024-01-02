#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n,m;
    cin>>n>>m;
    int arrB[m];
    set<int> s;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        if(s.find(x)!=s.end()) cout<<"YES\n";
        else {
            cout<<"NO\n";
            s.insert(x);
        }

    }
};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}