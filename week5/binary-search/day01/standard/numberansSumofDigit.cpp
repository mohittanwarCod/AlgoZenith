#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,s;
bool check(int x){
    int diff=x;
    int sumOfdigits = 0;
    while(x!=0){
        int digit = x%10;
        sumOfdigits+=digit;
        x /=10;

    }
    diff=diff-sumOfdigits;
    return diff>=s;

}


void solve(){
    cin>>n>>s;
    int lo = 1;
    int high = n;
    int ans = 0;
    while(lo<=high){
        int mid = lo + (high-lo)/2;
        if(check(mid)){
            ans = mid;
            high = mid-1;
        }else{
            lo = mid+1;
        }
    }
    if(ans) cout<<n-ans+1<<'\n';
    else cout<<ans<<'\n';

};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}