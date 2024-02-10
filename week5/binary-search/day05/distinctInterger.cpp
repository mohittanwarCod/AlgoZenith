#include <bits/stdc++.h>
using namespace std;
#define int long long
int distinctEl = 0;
int freq[1000100];
int arr[1000100];

int get_num_of_subarray(int n,int k,int *arr){
   
    int head = -1;
    int tail = 0;
    int ans = 0;
   
    int distinctEl = 0;
    

    while(tail<n){
        while(head+1<n && (distinctEl<k || freq[arr[head+1]]>=1)){
            head++;
            freq[arr[head]]++;
            if(freq[arr[head]]==1){
                distinctEl++;
            }
        }
        ans += head-tail+1;
        if(head>=tail){
            freq[arr[tail]]--;
            
            if(freq[arr[tail]]==0){
                distinctEl--;
            }
            tail++;
        }else{
            tail++;
            head=tail-1;
        }
        
    }
    return ans;

}
void solve(){
    int n;
    int k;
    cin>>n>>k;
    
    for(int i=0;i<n;i++) cin>>arr[i];
    
    cout<<get_num_of_subarray(n,k,arr)-get_num_of_subarray(n,k-1,arr)<<'\n';

}
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}