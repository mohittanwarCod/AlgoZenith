#include <bits/stdc++.h>
using namespace std;
#define int long long
bool check(int x,int *arr,int n,int k){
    int head = -1;
    int tail = 0;
    int sum = 0;
    int count = 0;
    
    while(tail<n){
        while(head+1<n && (arr[head+1]+sum)<=x ){
            head++;
            sum+=arr[head];
        }
        count += head-tail+1;
        if(head>=tail){
            sum-=arr[tail];
            tail++;
            
        }else{
            tail++;
            head = tail-1;
        }
    }
    return count>=k;
    
}
void solve(){
    int n;
    cin>>n;
    int num_of_sub=n*(n+1)/2;
    int k = (num_of_sub+1)/2; //  med index
   
    int arr[n];
    int hi = 0;
    int lo = 0;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
        hi+=arr[i];
        lo = min(lo,arr[i]);
    }
   
    
    int ans = 0;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(check(mid,arr,n,k)){
            ans = mid;
            hi = mid-1;
        }else{
            lo = mid+1;
        }

    }
    cout<<ans<<endl;
}
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}