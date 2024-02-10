#include <bits/stdc++.h>
using namespace std;
#define int long long
const char alpha[27] = {'0','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
void solve(){
    string s;
    cin>>s;
    string t,u;
    multiset<int> ms;
    for(int i=0;i<s.size();i++){
        ms.insert(-(s[i]-'a'+1));
    }
    for(int i=0;i<s.size();i++){
        int num = (s[i]-'a'+1);
        auto  it = ms.upper_bound(-num);
        if(it != ms.end()){
            char ch= alpha[num];
            t.push_back(s[i]);
           
        }else{
           char ch = alpha[num];
           u.push_back(s[i]);
        }
        ms.erase(ms.find(-num));
        
    }
    reverse(t.begin(),t.end());
    for(int i=0;i<t.size();i++){
        u.push_back(t[i]);
    }
    cout<<u<<'\n';

};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}