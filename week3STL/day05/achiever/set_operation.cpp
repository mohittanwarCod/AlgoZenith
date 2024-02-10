#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n,m;
    cin>>n>>m;
    int a[n];
    int b[m];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int j=0;j<m;j++) cin>>b[j];
    sort(a,a+n);
    sort(b,b+m);


   vector<int> v1(n+m);
   vector<int> :: iterator ls,it;
   ls = set_union(a,a+n,b,b+m,v1.begin());
   for(it=v1.begin();it != ls;it++){
    cout<<*it<<" ";
   }
   cout<<'\n';


   ls = set_intersection(a,a+n,b,b+m,v1.begin());
   for(it=v1.begin();it != ls;it++){
    cout<<*it<<" ";
   }
   cout<<'\n';

   ls = set_difference(a,a+n,b,b+m,v1.begin());
   for(it=v1.begin();it != ls;it++){
    cout<<*it<<" ";
   }
   cout<<'\n';




};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}