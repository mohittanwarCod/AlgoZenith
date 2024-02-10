#include <bits/stdc++.h>
using namespace std;
#define int long long 

void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    int rootVal = b*b-4*a*c;
    if(rootVal==0){
        cout<<1<<'\n';
    }else if(rootVal>0){
        cout<<2<<'\n';
    }else if(rootVal<0){
        cout<<0<<'\n';
    }
};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}
