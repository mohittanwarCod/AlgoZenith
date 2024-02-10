#include <bits/stdc++.h>
using namespace std;
#define int long long 
vector<vector<int>> all_perm;
vector<int> curr_perm;
map<int,int> m;
int n;
void rec(int level){
    if(level==n){
        all_perm.push_back(curr_perm);
        return;
    }
    for(auto v:m){
        if(v.second!=0){
            m[v.first]--;
            curr_perm.push_back(v.first);
            rec(level+1);
            m[v.first]++;
            curr_perm.pop_back();
        }
    }

}

void solve(){
 
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++) {
        cin>>arr[i];
        m[arr[i]]++;

    }
    rec(0);
   for(int i=0;i<all_perm.size();i++){
    for(int j=0;j<n;j++){
        cout<<all_perm[i][j]<<" ";

    }
    cout<<'\n';
   }


};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      //int _t; cin>>_t;while(_t--)
      solve();
}