#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct myds{
    int sum=0;
    multiset<ll> s;
    void add(int x){
          s.insert(x);
          sum+=x;

    }
    void remove(int x){
        if(s.find(x)!=s.end()){
            s.erase(s.find(x));
            sum-=x;
        }

    }
    int getMax(){
        if(s.empty()) return -1;
        else return *(s.rbegin());


    }
    int getMin(){
        if(s.empty()) return -1;
        else return *s.begin();
    }
    int getSum(){
        return sum;
    }

};
void solve(){
    int q;
    cin>>q;
    myds ds;
    while(q--){
        int x;
        cin>>x;
        if(x==1){
            int y;
            cin>>y;
            ds.add(y);
            

        }else if(x==2){
            int y;
            cin>>y;
            ds.remove(y);

        }else if(x==3){
            char ch;
            cin>>ch;
            cout<<ds.getMin()<<'\n';


        }else if(x==4){
            char ch;
            cin>>ch;
            cout<<ds.getMax()<<'\n';

        }else if(x==5){
            char ch;
            cin>>ch;
            cout<<ds.getSum()<<'\n';


        }

    }

};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      //int _t; cin>>_t;while(_t--)
      solve();
}