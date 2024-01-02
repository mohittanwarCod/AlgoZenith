#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a;
    cin>>a;
    for(int i=2;i<=a/2;i++){
        if(a%i==0){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
};

signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}