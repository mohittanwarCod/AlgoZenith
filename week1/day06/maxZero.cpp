#include <bits/stdc++.h>
using namespace std;
#define f  float
void solve(){
    int n;
    cin>>n;
    f a[n];
    f b[n];
    map<f,int> m;
    long long ans = 0;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    for(int i=0;i<n;i++){
        if(a[i]!=0) m[b[i]/a[i]]++;
        if(a[i]==0 && b[i]==0) ans++;
    }
    long long max = LONG_LONG_MIN;
    for(auto it:m){
        if(it.second>=max) max=it.second;

    }
    cout<<ans+max<<'\n';
};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}