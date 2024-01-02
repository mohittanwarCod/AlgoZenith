#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(a==0) return b;
    return gcd(b%a,a);
}
void solve(){
    int n;
    cin>>n;
    int arr[n];
   
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     int net_gcd=gcd(arr[0],arr[1]);
      for(int i=2;i<n;i++){
      net_gcd = gcd(net_gcd,arr[i]);
      }
     (net_gcd==1)?cout<<"No":cout<<"Yes";
     cout<<endl;
    
};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}