#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,k;
int arr[100100];
int p[100100];
int numZero(int l,int r){
    int ans = (r-l+1) - (p[r]-(l>0?p[l-1]:0));
    return ans;
}
int check(int st,int x){

return numZero(st,x)<=k;

}
int totalNum = 0;
void solve(){
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        p[i]=arr[i];
        if(i) p[i]+=p[i-1];
    }
    
    for(int st=0;st<n;st++){
        int lo = st;
        int hi = n-1;
        int ans = st-1;
        while(lo<=hi){
            int mid = (lo+hi)/2;
            if(check(st,mid)){
                ans = mid;
                lo = mid+1;
            }else{
                hi = mid-1;
            }
        }
        totalNum += (ans-st+1);
    }
   cout<<totalNum<<'\n';

};
signed main(){

      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}