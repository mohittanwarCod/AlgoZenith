#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int n;
int arr[21];
vector<int> curr;

int ans = 0;
bool is_prime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
          
    }
    return true;
}
// bool is_prime_cycle(vector<int> curr){
//     for(int i=0;i<n-1;i++){
//         if(!is_prime(curr[i]+curr[i+1]))return false;

//     }
//     if(!is_prime(curr.back()+curr[0])) return false;
//     return true;
// }
void rec(int level){
     if(level == n){
      if(is_prime(curr[0]+curr.back()))ans++;
      
       return;
     }
      for(int ch=2;ch<=n;ch++){
        if(arr[ch]!=0 && ((curr.back()&1) != (ch&1))){ //  last bit 
            if(is_prime(curr.back()+ch)){
            curr.push_back(ch);
            arr[ch]=0;
            rec(level+1);
            curr.pop_back();
            arr[ch]=1;

            }
         
            
        }
    }
}
void solve(){
    cin>>n;
    if(n%2){
        cout<<0<<endl;
        return;
    }
    for(int i=1;i<=n;i++) arr[i]=1;
    curr.push_back(1);
    rec(1);
    cout<<ans<<endl;
    



}
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
    //   int _t; cin>>_t;while(_t--)
      solve();
}