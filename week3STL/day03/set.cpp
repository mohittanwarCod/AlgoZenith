#include <bits/stdc++.h>
using namespace std;
void solve(){
    int q;
    cin>>q;
    set<int> s;
    while(q--){
        string opr;
        cin>>opr;
        if(opr=="add"){
            int n;
            cin>>n;
            s.insert(n);

        }else if(opr=="erase"){
            int n;
            cin>>n;
            s.erase(n);
        }else if(opr=="find"){
            int n;
            cin>>n;
            if(s.find(n)!=s.end()) cout<<"YES"<<'\n';
            else cout<<"NO"<<'\n';
        }else if(opr=="print"){
            for(auto it=s.begin();it!=s.end();it++){
                cout<<*it<<" ";
            }
            cout<<'\n';
        }else if(opr=="empty"){
            s.clear();
        }
    }
};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}