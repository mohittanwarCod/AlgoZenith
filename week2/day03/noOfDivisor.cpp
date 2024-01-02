#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a;
    cin>>a;
    int cnt =0;
    for(int i=1;i*i<=a;i++){
        if(a%i==0){
           cnt+=2;
           if(i*i==a) cnt--;
        } 

    }
    cout<<cnt<<endl;
};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}