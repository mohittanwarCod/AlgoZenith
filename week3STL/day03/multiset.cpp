#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    multiset<int> ms;
    while(n--){
        string opr;
        cin>>opr;
        if(opr=="add"){
            int x;
            cin>>x;
            ms.insert(x);


        }else if(opr=="erase"){
                int x;
                cin >> x;
                auto it = ms.find(x);
                if (it != ms.end()) {
                    ms.erase(it);
                }

        }else if(opr=="eraseall"){
            int x;
            cin>>x;
            ms.erase(x);

        }else if(opr=="find"){
            int x;cin>>x;
            if(ms.find(x)!=ms.end()) cout<<"YES"<<'\n';
            else cout<<"NO"<<'\n';

        }else if(opr=="count"){
            int x;cin>>x;
           cout<< ms.count(x)<<'\n';

        }else if(opr=="print"){
            for(auto it=ms.begin();it!=ms.end();it++){
                cout<<*it<<" ";
            }
            cout<<'\n';

        }else if(opr=="empty"){
            ms.clear();

        }
    }
};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}