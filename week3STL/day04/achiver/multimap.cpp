#include <bits/stdc++.h>
using namespace std;
#define int long long
struct myds
{
    multimap<string,int> m;
    void add(string name,int marks){
        m.insert(make_pair(name,marks));

    }
    void erase(string name){
        auto it = m.find(name);
        if(it != m.end()) m.erase(it);
    }
    void eraseall(string name){
        m.erase(name);
    }
    void print(string name){
        auto it = m.find(name);
        if(it != m.end()) cout<<it->second<<'\n';
        else cout<<0<<'\n';
    }
};

void solve(){
    int q;
    cin>>q;
    myds ds;
    while(q--){
        string query;
        string x;
        cin>>query>>x;
        if(query=="add"){
            int n;
            cin>>n;
            ds.add(x,n);

        }else if(query=="erase"){
            ds.erase(x);

        }else if(query=="eraseall"){
            ds.eraseall(x);

        }else if(query=="print"){
            ds.print(x);

        }
    }
};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}