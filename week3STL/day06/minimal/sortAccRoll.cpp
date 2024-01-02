#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<string,int> &a,pair<string,int> &b){
    return a.second<b.second;
}
void solve(){
    int n;
    cin>>n;
    vector<pair<string,int>> s;
    for(int i=0;i<n;i++){
        string name;
        int roll;
        cin>>name>>roll;
        s.push_back({name,roll});
    }
    sort(s.begin(),s.end(),cmp);
    for(int i=0;i<n;i++){
        cout<<s[i].first<<" "<<s[i].second<<'\n';
    }
};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}