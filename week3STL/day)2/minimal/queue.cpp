#include <bits/stdc++.h>
using namespace std;
void solve(){
    int q;
    cin>>q;
    queue<int> v;

    while(q--){
        string opr;
        cin>>opr;
        if(opr=="add"){
            int n;
            cin>>n;
            v.push(n);
        }else if(opr=="remove") {
            if(!v.empty()) v.pop();
        }else if(opr=="print"){
            if(!v.empty()) cout<<v.front()<<endl;
            else cout<<0<<endl;
        }


    }

};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}