#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int cnt=0;
    stack<char> st;
    for(auto ch:s){
        if(ch=='('){
          st.push('(');
        }else {
            if(!st.empty()){
                if(st.top()!='(') cnt++;
                else st.pop();
            }else cnt++;
        }
    }
    cnt+=st.size();
    cout<<cnt<<'\n';
};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}