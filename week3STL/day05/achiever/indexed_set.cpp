#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace std;
using namespace __gnu_pbds;
#define int long long

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
void solve(){
      int q;
      cin>>q;
      ordered_set os;
      while(q--){
        string query;
        int x;
        cin>>query>>x;
        if(query=="add"){
            auto it=os.find(x);
            if(it == os.end()) os.insert(x);
        }else if(query=="remove"){
            os.erase(x);
        }else if(query=="find"){
            if(x>=os.size()) cout<<-1<<'\n';
            else cout<<*(os.find_by_order(x))<<'\n';

        }else if(query=="findpos"){
            cout<<os.order_of_key(x)<<'\n';
        }


      }
};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}