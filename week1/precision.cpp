#include <bits/stdc++.h>
using namespace std;

void solve(){
    double x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    double euclidean = pow(y2-y1,2)+pow(x2-x1,2);
    euclidean = sqrt(euclidean);
    double Manhattan = abs(y2-y1)+abs(x2-x1);
    cout<<fixed<<setprecision(7)<<euclidean<<" "<<Manhattan<<'\n';

};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}