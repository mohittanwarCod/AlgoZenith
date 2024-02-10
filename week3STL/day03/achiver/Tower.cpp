#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;
    cin>>n;
    int arr[n+1];
    arr[0]=0;
    for(int i=1;i<=n;i++){
     cin>>arr[i];
    }
    multiset<int> ms;
    for(int i=1;i<=n;i++){
        if(ms.empty()) ms.insert(arr[i]);
        else {
            auto it = ms.upper_bound(arr[i]);
            if(it == ms.end()) ms.insert(arr[i]);
            else {
                ms.erase(it);
                ms.insert(arr[i]);
            }
        }
    }
    cout<<ms.size()<<'\n';

};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}