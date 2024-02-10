#include <bits/stdc++.h>
using namespace std;
#define int long long 
int n;
int k;
vector<int> v;
bool check(int maxDiffAllowed){
  int needed = 0;
  for(int i=1;i<n;i++){
    //  needed += ceil((v[i] - v[i-1]) / (double)x) - 1;
    // needed+= (((v[i]-v[i-1])+x-1)/x)-1;
    needed+=(v[i]-v[i-1]+maxDiffAllowed-1)/maxDiffAllowed - 1;
  }
  return needed<=k;

}
void solve(){
    //0001111111 montonic func
   
    cin>>n>>k;
    v.resize(n);
    for(int i=0;i<n;i++) cin>>v[i];
   
    sort(v.begin(),v.end());
    int low = 1;
    int high = 0;
    for(int i=1;i<n;i++) {
        high = max(high,v[i]-v[i-1]);
    }
    int ans = 1;
    while(low<=high){
        int mid = (low+high)/2;
        if(check(mid)) {
            ans = mid;
            high = mid-1;
        }else {
            
            low = mid+1;
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

// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// int arr[100001];
// int n,k;
// bool check(int maxDiffAllowed){
// int pointsRequired = 0;
// int i = 1;
// while(i<n){
//  pointsRequired+=(arr[i]-arr[i-1]+maxDiffAllowed-1)/maxDiffAllowed - 1;
//  i++;
// }
// return pointsRequired<=k;
// }
// signed main()
// {
// ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
// int testcases;
// cin>>testcases;
// while(testcases--){
//  cin>>n>>k;
//  for(int i=0;i<n;i++)
//   cin>>arr[i];
//  int low = 1,high = 1e9;
//  int ans = high;
//  while(low<=high){
//   int mid = (low+high)/2;
//   if(check(mid))
//    ans = mid,high = mid-1;
//   else
//    low = mid+1;
//  }
//  cout<<ans<<"\n";
// }
// }