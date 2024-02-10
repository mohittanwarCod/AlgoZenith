#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> leftSmallest(ll *arr,ll n){
    vector<ll> nearSmall;
    stack<pair<int,int>> s;
    for(ll i=0;i<n;i++){
        while(!s.empty() && s.top().first>=arr[i]){
            s.pop();
        }
        if(s.empty()) nearSmall.push_back(-1);
        else nearSmall.push_back(s.top().second);
        s.push(make_pair(arr[i],i));


    }
    return nearSmall;
}
vector<ll> nearrightSmall(ll *arr,ll n){
    vector<ll> rightSmall;
    stack<pair<ll,ll>> s;
    for(ll i=n-1;i>=0;i--){
        while(!s.empty() && s.top().first>=arr[i]){
            s.pop();
        }
        if(s.empty()) rightSmall.push_back(n);
        else rightSmall.push_back(s.top().second);
        s.push(make_pair(arr[i],i));


    }
    reverse(rightSmall.begin(),rightSmall.end());
    return rightSmall;
}
void solve(){
    ll n;
    cin>>n;
    ll arr[n];
    ll maxArea = LONG_LONG_MIN;
    
    
    for(ll i=0;i<n;i++){
        cin>>arr[i];
       
    }
    vector<ll> leftSmallI = leftSmallest(arr,n);
    vector<ll> rightSmall = nearrightSmall(arr,n);
    for(ll i=0;i<n;i++){
        ll area = (rightSmall[i]-leftSmallI[i]-1)*arr[i];
        maxArea=max(area,maxArea);
    }
    cout<<maxArea<<'\n';


};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      ll _t; cin>>_t;while(_t--)
      solve();
}