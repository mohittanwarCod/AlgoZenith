#include <bits/stdc++.h>
using namespace std;
struct monotone_deque{
    deque<int> dq;
    void insert(int x){
        while(!dq.empty() && dq.back()>x){
            dq.pop_back();
        }
        dq.push_back(x);


    }
    void remove(int x){
        if(dq.front()==x) {
            dq.pop_front();
        }

    }
    int getMin(){
        return dq.front();

    }

};
void solve(){
    int n,k;
    cin>>n>>k;

    int arr[n];
    monotone_deque md;
    for(int i=0;i<n;i++) cin>>arr[i];


    for(int i=0;i<n;i++){
        md.insert(arr[i]);
        if(i-k>=0) md.remove(arr[i-k]);
        if(i>=(k-1))cout<<md.getMin()<<'\n';
    }


};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      //int _t; cin>>_t;while(_t--)
      solve();
}