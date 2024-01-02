#include <bits/stdc++.h>
using namespace std;
void solve(){
    stack<int> s1;
    stack<int> s2;
    int q;
    cin>>q;
    while(q--){
        string opr;
        cin>>opr;
        if(opr=="push"){
            int n;
            cin>>n;
            s1.push(n);
           

        }else if(opr=="pop"){
            if(s2.empty())
              while(s1.size())
              s2.push(s1.top()),s1.pop();

              cout<<s2.top()<<'\n';
              s2.pop();
           
        }else if(opr=="front"){
              if (s2.empty())
                while (s1.size())
                  s2.push(s1.top()), s1.pop();

                  cout<<s2.top()<<'\n';
               
  }
           
        }
    }

signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}