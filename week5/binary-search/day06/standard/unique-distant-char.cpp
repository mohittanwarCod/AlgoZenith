#include <bits/stdc++.h>
using namespace std;
#define int long long 
// void solve(){
//     int n;
//     cin>>n;
//     string s;
//     cin>>s;
//     set<char> ch;
//     for(int i=0;i<n;i++) ch.insert(s[i]);
//     vector<pair<int,int>> occ;
//     for(auto it:ch){
//         int left = -1;
//         int right = n;
//         for(int i=0;i<n;i++){
//             if(s[i]==it) {
//                 left = i;
//                 break;
//             }
//         }
//         for(int i=n-1;i>=0;i--){
//              if(s[i]==it) {
//                 right = i;
//                 break;
//             }
//         }
//         occ.push_back({left,right});

//     }
//     int ans = 0;
//     ans+= ch.size()*n*(n+1)/2;
//     for(int i=0;i<occ.size();i++){
//         ans-= ((occ[i].first-0)+(n-1-occ[i].second));
//     }
//     cout<<ans<<endl;

// }
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int prev[26];
    int ans = 26*(n*(n+1)/2);
    for(int i=0;i<26;i++) prev[i]=-1;
    for(int i=0;i<n;i++) {
        int lenNotWithChar = i-prev[s[i]-'a']-1;    // -1 is bcz we want to exclude ith also
        ans = ans - (len*(len+1)/2);
        prev[s[i]-'a']=i;

    }
    for(int i=0;i<26;i++){ //  aabbbbccc  in this we remove array from a to a but to remove last b to  last c  

        int len = n-prev[i]-1;
        ans = ans - len*(len+1)/2;

    }
    cout<<ans<<endl;
}
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}