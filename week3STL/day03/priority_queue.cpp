#include <bits/stdc++.h>
using namespace std;
void solve(){
    int q;
    cin>>q;
    priority_queue<int> pq;
    while(q--){
        string opr;
        cin>>opr;
        if(opr=="add"){
            int n;
            cin>>n;
            pq.push(n);

        }else if(opr=="remove"){
            if(!pq.empty()) pq.pop();

        }else if(opr=="print"){
            if(!pq.empty()) cout<<pq.top()<<'\n';
            else cout<<0<<'\n';

        }


    }

};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}