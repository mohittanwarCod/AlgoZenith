#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct myds{
    multiset<ll> ms;
    multiset<ll> msK;
    ll k;
    myds(ll k){
        this->k = k;
    }
    ll sum = 0;
    void insert(ll x){
        if(msK.size()<k){ 
            msK.insert(x);
            sum+=x;
        }
        else if(msK.size()==k) {
           msK.insert(x);
           sum+=x;
           sum-= *msK.begin();
           ms.insert(*msK.begin());
           msK.erase(msK.begin());
        }

    }
    void remove(ll x){
        auto it = ms.find(x);
        if(it!=ms.end()) ms.erase(it);
        else {
            it = msK.find(x);
            if(it!=msK.end()){
                msK.erase(it);
                sum-= x;
                if(!ms.empty()){
                    msK.insert(*ms.rbegin());
                    sum+= *ms.rbegin();

                    ms.erase(ms.find(*ms.rbegin()));
                    

                }
            }
        }

    }
    ll printK(ll k){
        
        
        return sum;

    }

};
void solve(){
    int q,k;
    cin>>q>>k;
    myds ds(k);
    while(q--){
        int a;
        cin>>a;
        if(a==1){
            ll x;
            cin>>x;
           
            ds.insert(x);
            

        }else if(a==2){
            ll x;
            cin>>x;
            ds.remove(x);

        }else if(a==3){
            char ch;
            cin>>ch;
           ll sum =  ds.printK(k);
           cout<<sum<<'\n';
        }
    }

};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      //int _t; cin>>_t;while(_t--)
      solve();
}
