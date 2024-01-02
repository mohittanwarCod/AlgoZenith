#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n;
    cin>>n;
    string word;
    cin>>word;
    ll x=0,y=0,dir=0;
    for(int i=0;i<n;i++){
        char ch = word[i];
        if(ch=='W'){
            if(dir==0) y++;
            else if(dir<0){
                if(dir%2==0) y--;
                else x--;
            }else if(dir>0){
                if(dir%2==0) y++;
                else x++;
            }


        }else if(ch=='L'){
            dir = (dir-1)%4;

        }else if(ch=='R'){
            dir = (dir+1)%4;

        }

    }
    if((x==0 && y==0) ||  dir!=0) cout<<"YES\n";
    else cout<<"NO\n";
};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}
