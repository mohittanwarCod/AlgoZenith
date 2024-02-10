#include <bits/stdc++.h>
using namespace std;
bool check(double x,int n,int *a,int *b,int k){
      priority_queue<double> pq;
      for(int i=0;i<n;i++) {
            pq.push(a[i]-x*b[i]);
      }
      double sum = 0;
      for(int i=1;i<=k;i++){
         sum+= pq.top();
         pq.pop();

      }
      return sum>=0;
}
void solve(){
      int n,k;
      cin>>n>>k;
      int a[n];
      int b[n];
      for(int i=0;i<n;i++) cin>>a[i];
      for(int i=0;i<n;i++) cin>>b[i];
      
      double eps = 1e-9;
      double lo = 0;
      double hi = 1e8;
      while(abs(hi-lo)>=eps){
            double mid = (lo+hi)/2;
            if(check(mid,n,a,b,k)){
                  lo = mid;
            }else{
                  hi = mid;
            }
      }
      double ans = (lo+hi)/2;
      cout<<fixed<<setprecision(6)<<ans<<'\n';


}
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}