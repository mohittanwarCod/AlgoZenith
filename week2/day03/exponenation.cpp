#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c,p;
    cin>>a>>b>>c>>p;
    
    if(a==0 && b!=0){
        cout<<0<<endl;
        return;
    }

    int b_pow_ans = pow(b,c);
    if(a%p==0 && b_pow_ans!=0){
        cout<<0<<endl;
        return;
    }

    if(a%p!=0 && b_pow_ans!=0){
           b_pow_ans = b_pow_ans%(p-1);
           int a_pow = b_pow_ans%(p-1);
           int a_pow_ans = pow(a,a_pow);
           a_pow_ans = a_pow_ans %p;
           cout<<a_pow_ans<<endl;
           return;

    }
 
   cout<<1<<endl;
    
   

  
   
    
   
    

};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}