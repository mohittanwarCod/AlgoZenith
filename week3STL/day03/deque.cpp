#include <bits/stdc++.h>
using namespace std;
void solve(){
    int q;
    cin>>q;
    deque<int> dq;
    while(q--){
        string opr;
        cin>>opr;
        
        if(opr=="insertback"){
            int n;
            cin>>n;
            dq.push_back(n);
        }else if(opr=="insertfront"){
            int n;
            cin>>n;
            dq.push_front(n);
        }else if(opr=="eraseback"){
            if(!dq.empty()) dq.pop_back();
            
        }else if(opr=="erasefront"){
            if(!dq.empty()) dq.pop_front();

        }else if(opr=="printfront"){
            if(!dq.empty()) cout<<dq.front()<<'\n';
            else cout<<0<<'\n';
        }else if(opr=="printback"){
            
            if(!dq.empty()) cout<<dq.back()<<'\n';
            else cout<<0<<'\n';
         }else if(opr=="print"){
            int x;
            cin>>x;
            if(x>=dq.size()) cout<<0<<'\n';
            else{
               cout<< dq.at(x)<<'\n';
                
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