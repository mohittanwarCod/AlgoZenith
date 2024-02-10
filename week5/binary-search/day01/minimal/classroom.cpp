#include <bits/stdc++.h>
using namespace std;
#define int long long 
vector<int> v;
int k;
int n;
int check(int x){
    int numStudents = 1;
    int y = v[0];
    int next=y+x;
    for(int i=1;i<n;i++){
        if(v[i]>=next){
            numStudents++;
            next = v[i]+x;
        }
    }
    return numStudents>=k;

}
void solve(){
    //11111111000 montonic func
   
    cin>>n>>k;
    v.resize(n);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());

    int low = 0;
    int high = 1e18;
    int ans = 1;
    while(low<=high){
        int mid = (low+high)/2;
        if(check(mid)) {
            ans = mid;
            low = mid+1;
        }else {
            high = mid-1;
        }
    }
    cout<<ans<<'\n';


};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}



