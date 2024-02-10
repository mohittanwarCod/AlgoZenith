#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int freq[100001]={};
    int b = 0;int cnt=0;
    int n;cin>>n;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        freq[x]++;
        if(x>b){
            cnt++;
        }
        if(cnt>b){
            b++;
            cnt-=freq[b];

        }
        cout<<b<<" ";



    }
    cout<<'\n';
};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}