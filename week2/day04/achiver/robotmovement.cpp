#include <bits/stdc++.h>
using namespace std;
#define int long long
struct prev_next_unblocked{
    set<pair<int,int>> s,ns,pns;
    void insert(int x){
        s.insert(x);
        ns.erase(x);
        pns.erase(x);
        if(s.find(x+1)==s.end()){
            ns.insert(x+1);
        }
        if(s.find(x-1)==s.end()){
            pns.insert(x-1);
        }

    }
    int next_unblock(int y){
        if(s.find(y)==s.end()) return y;
        else {
            return *(ns.lower_bound(y));
        }
    }
    int prev_unblock(int y){
        if(s.find(y)==s.end()) return y;
        else {
            auto it = pns.lower_bound(y);
            it--;
            return *it;
        }
    }

};
void solve(){
    int n,r,c,x,y;
    cin>>n>>r>>c>>x>>y;
    prev_next_unblocked i,j;
    i.insert(x);
    j.insert(y);
    string str;
    cin>>str;
    int str_size=str.size();
    // N=+1 // S=-I W = -J E=+J
    for(int k=0;k<str.size();k++){
           char ch = str[k];
           if(ch=='N'){
               int x_val = i.prev_unblock(x);
                x=x_val;
           }else if(ch=='S'){
            int x_val = i.next_unblock(x);
            x=x_val;

           }else if(ch=='W'){
            int y_val = j.prev_unblock(y);
            y=y_val;

           }else if(ch=='E'){
            int y_val = j.next_unblock(y);
            y=y_val;

           }
           i.insert(x);
           j.insert(y);

    }
    cout<<x<<" "<<y<<'\n';
    

};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}