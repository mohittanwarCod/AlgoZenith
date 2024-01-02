#include <bits/stdc++.h>
using namespace std;
void solve(){
         int n,q;
         cin>>n>>q;
         int arr[n];
         for(int i=0;i<n;i++) cin>>arr[i];
         sort(arr,arr+n);

         while(q--){
            int a,b;
            cin>>a>>b;
            if(a==1){
                 auto i = lower_bound(arr,arr+n,b);
                if(i==arr+n)cout<<-1<<" ";
                else cout<<*i<<" ";

            }else if(a==2){
                auto i = upper_bound(arr,arr+n,b);
                if(i==arr+n) cout<<-1<<" ";
                else cout<<*i<<" ";

            }else if(a==3){
                int ans = upper_bound(arr,arr+n,b)-arr;
                cout<<ans<<" ";

            }else if(a==4){
                int ans = lower_bound(arr,arr+n,b)-arr;
                cout<<ans<<" ";

            }
         }
         cout<<'\n';
};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}