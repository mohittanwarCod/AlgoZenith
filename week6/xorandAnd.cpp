#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
#define int long long 
long long binPow(long long a,long long b,long long mod){
      long long res=1;
      while(b>0){
         if(b&1)
            res = (res%mod*a%mod)%mod;
        a=(a%mod*a%mod)%mod;
        b=b>>1;
       }
   return( res%mod+mod)%mod; 
}

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int ans_xor_pair=0;
    int ans_and_pair=0;
    int ans_and_subset = 0;
    int ans_xor_subset=0;
    for(int j=0;j<32;j++){
        int count[2];
        count[0]=0,count[1]=0;

        
        for(int i=0;i<n;i++){
            count[(arr[i]>>j)&1]++;
        }
        int num_of_subset_bothBit = binPow(2,count[0]+count[1],mod)-1;
        int num_of_subset_one = binPow(2,count[1],mod)-1;
        int num_of_subset_zero = binPow(2,count[0],mod)-1;
        ans_xor_subset+=((1LL<<j)%mod*(num_of_subset_bothBit-num_of_subset_one/2-num_of_subset_zero))%mod;
        cout<<j<<":"<<" "<<num_of_subset_bothBit<<" "<<num_of_subset_one<<" "<<num_of_subset_zero<<"ans_xor_subset"<<" "<<ans_xor_subset<<'\n';
      
        
        ans_xor_pair+= ((1LL<<j)%mod*((count[1]%mod*count[0]%mod)%mod)%mod);
        ans_and_subset += ((1LL<<j)%mod*(num_of_subset_one))%mod;
        if(count[1]>1) {
          int count_of_ones = count[1];
            ans_and_pair+= (((1LL<<j)%mod*((((count_of_ones)%mod*(count_of_ones-1)%mod)%mod)/2))%mod);

        }
    }
    cout<<(ans_xor_pair%mod+mod)%mod<<" "<< (ans_xor_subset)<<" "<< (ans_and_pair%mod+mod)%mod<<" "<<(ans_and_subset%mod+mod)%mod<<'\n';

}
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)   
      solve();
}