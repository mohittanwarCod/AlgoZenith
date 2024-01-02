#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    map<string,int> mp;
    while(n--){
        string name;
        cin>>name;
        if(mp.find(name)==mp.end()){
            cout<<"OK\n";
            mp[name]++;
        }
        else {
            cout<<name<<mp[name]<<'\n';
            mp[name]++;
        }
    }
};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}