#include <bits/stdc++.h>
using namespace std;
void solve(){
    int q;
    cin>>q;
    map<string,int> m;
    while(q--){
        string opr,name;
        cin>>opr>>name;
        if(opr=="add"){
           
            int n;
            cin>>n;
            m[name]=n;
        }else if(opr=="print"){
            
            if(m.find(name)!=m.end()) cout<<m[name]<<'\n';
            else cout<<0<<'\n';
        }else if(opr=="erase"){
            
            m.erase(name);
        }
    }
};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}

