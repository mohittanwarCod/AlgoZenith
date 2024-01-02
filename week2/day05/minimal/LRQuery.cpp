#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
void solve(){
    int N,Q;
    cin>>N>>Q;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    int pre[N];
    pre[0]=arr[0];
    for(int i=1;i<N;i++){
        pre[i]=(arr[i]%mod+pre[i-1]%mod)%mod;
    }

    while(Q--){
        int i,j;
        cin>>i>>j;
        // for 0 indexing
        i-=1;
        j-=1;
        int ans;
        if(i>0){
            ans = pre[j]-pre[i-1];

        }else{
            ans = pre[j];

        }
        cout<<((ans%mod)+mod)%mod<<endl;
    }
};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      //int _t; cin>>_t;while(_t--)
      solve();
}