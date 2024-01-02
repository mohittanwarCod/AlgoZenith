#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(a==0) return b;
    return gcd(b%a,a);
}
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    int gcdAB = gcd(a,b);
    if(c%gcdAB==0) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}