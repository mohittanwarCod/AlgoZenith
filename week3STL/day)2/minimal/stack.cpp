#include <bits/stdc++.h>
using namespace std;

void solve(){
    int q;
    stack <int> s;
    cin>>q;
    while(q--){
        string opr;
        cin>>opr;
        if(opr=="add"){
            int n;
            cin>>n;
            s.push(n);


        }else if(opr=="remove"){
            if(!s.empty()) s.pop();

        }else if(opr=="print"){
            if(!s.empty()) cout<<s.top()<<"\n";
            else cout<<0<<"\n";

        }
    }
};

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)solve();
    return 0;
}