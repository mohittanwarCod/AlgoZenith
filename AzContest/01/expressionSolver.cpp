#include <bits/stdc++.h>
using namespace std;
#define int long long 
void solve(){
    int n;
    cin>>n;
    int size = n*(n+1)/2;
    int arr[size];
    for(int i=0;i<size;i++) cin>>arr[i];
    sort(arr,arr+size);
    

    int i=0;
    int h = 1;
    while(h<n){ h=1 h2 
        int cnt = h;
        while(cnt--){
            if(arr[i+h]<=arr[i] || arr[i+h+1]<=arr[i]){

               cout<<"NO"<<'\n';
               return;
            }
            i++;
        }
        h++;
    }
    cout<<"YES"<<'\n';

}
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
    //   int _t; cin>>_t;while(_t--)
      solve();
}