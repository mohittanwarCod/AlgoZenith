// #include <bits/stdc++.h>
// using namespace std;
// void solve(){
//     int b = 0;
//     multiset<int> s;
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         s.insert(x);
//         int k = b+1;
        
//          auto nk = s.lower_bound(k);
       
//         int nkEl = distance(s.begin(), nk);
        
        
//         if(s.size()-nkEl>=k){
            
//             b=k;
//         }
//         cout<<b<<" ";

//     }
//     cout<<'\n';

// };
// signed main(){
//       ios_base::sync_with_stdio(0);
//       cin.tie(0);cout.tie(0);
//       int _t; cin>>_t;while(_t--)
//       solve();
// }

//*************Above it correct but due to distance function its time complexity increaees to n2;

#include <bits/stdc++.h>
using namespace std;
void solve(){
    multiset<int> ms;
    int n;
    cin>>n;
    int b=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x>b){
            ms.insert(x);
            for(int j=0;j<=b;j++){
                ms.erase(j);
            }
        }
        if(ms.size()>b)b++;
        cout<<b<<" ";

    }
    cout<<'\n';
};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}