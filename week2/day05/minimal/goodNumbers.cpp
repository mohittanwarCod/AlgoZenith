#include <bits/stdc++.h>
using namespace std;
const int n = 1000002;
int arr[n];

void solve(){
    int N,K,Q;
    cin>>N>>K>>Q;
   for(int i=0;i<n;i++){
    arr[i]=0;
   }
    
    while(N--){
        int i,j;
        cin>>i>>j;
        arr[i]+=1;
        arr[j+1]-=1;

    }                                                                
   
 
    for(int i=1;i<n;i++){
        arr[i]+=arr[i-1];
    }
  // checking good numbers or not
    for(int i=1;i<n;i++){
        if(arr[i]>=K) arr[i]=1;
        else arr[i]=0;
    }
    // prefix array how many good number till i
    for(int i=1;i<n;i++){
        arr[i]+=arr[i-1];
    }

    while(Q--){
        int i,j;
        cin>>i>>j;
        cout<<arr[j]-arr[i-1]<<endl;

    }
   

};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      //int _t; cin>>_t;while(_t--)
      solve();
}