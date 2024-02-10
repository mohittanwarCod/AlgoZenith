#include <bits/stdc++.h>
using namespace std;
#define int long long
bitset<60> num(0);
bool test(int i){
     if(num.test(i)){
        return 1;
     }
     return 0;
}
void set1(int i){
   num.set(i);
}
void clear(int i){
    num.reset(i);
}
void flip(int i){
    num.flip(i);
}
bool all(){
    return num.all();

}
bool any(){
   return num.any();
}
bool none(){
      return num.none();
}
void count(){
    cout<<num.count()<<'\n';
   

}
int val(){
    return num.to_ullong();
}

void solve(){
    int n;
    cin>>n;
    while(n--){
        int query;
        cin>>query;
        if(query==1){
            int i;
            cin>>i;
            cout<<test(i)<<'\n';

        }else if(query==2){
             int i;
            cin>>i;
            set1(i);

        }else if(query==3){
             int i;
            cin>>i;
            clear(i);


        }else if(query==4){
             int i;
            cin>>i;
            flip(i);

        }else if(query==5){
            cout<<all()<<'\n';

        }else if(query==6){
            cout<<any()<<'\n';

        }else if(query==7){
            cout<<none()<<'\n';

        }else if(query==8){
            count();

        }else{
           cout<<val()<<'\n';

        }
    }


};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
    //   int _t; cin>>_t;while(_t--)
      solve();
}