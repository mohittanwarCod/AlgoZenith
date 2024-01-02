

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 100002;
ll pre[N];
void solve(){
    ll n,m,q;
    cin>>n>>m>>q;
    ll arr[n];
    for(int i=0;i<N;i++){
        pre[i]=0;
    }

    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    while(m--){
        ll l,r;
        cin>>l>>r;
        pre[l]+=1;
        pre[r+1]-=1;
    }

    for(int i=1;i<=n;i++){
        pre[i]+=pre[i-1];

    }
    
     vector<pair<ll,ll>> s;
     
    for(int i=1;i<=n;i++){
        s.push_back({arr[i],pre[i]});

    }
    

    sort(s.begin(),s.end());
    

    for(int i=1;i<n;i++){
        s[i].second+=s[i-1].second;
    }
    vector<ll> temp;

    for(int i=0;i<s.size();i++){
        temp.push_back(s[i].second);

    }


    

    
    while(q--){
        ll k;
        cin>>k;
        int i = lower_bound(temp.begin(),temp.end(),k)-temp.begin();
        if(i==temp.size())cout<<-1<<" ";
        else cout<<s[i].first<<" ";

    }
    cout<<endl;

};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}