/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;
#define int long long 
const int mod = 1e9+7;


long long binpow(long long a, long long b,int mod) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res%mod * a%mod)%mod;
        a = (a%mod * a%mod)%mod;
        b >>= 1;
    }
    return (res%mod+mod)%mod;
}
void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int ans_xor_pair=0;
    int ans_xor_subset=0;
    int ans_and_pair = 0;
    int ans_and_subset=0;
    int bits = 0; 
  
 
    
    for(int j=0;j<32;j++){
        int count[2];count[0]=0,count[1]=0;
        
        for(int i=0;i<n;i++){
            count[(arr[i]>>j)&1]++;
            
        }
        ans_xor_pair+= ((1LL<<j)*((count[0]*count[1])%mod));
        ans_and_pair+=(1LL<<j)*((count[1]*(count[1]-1)/2)%mod);
        ans_and_subset += (1LL<<j)*(binpow(2,count[1],mod)-1);
        if(count[1]) {
           ans_xor_subset += binpow(2,n-1+j,mod);
        }
        
    }
    cout<<(ans_xor_pair%mod+mod)%mod<<" "<<(ans_xor_subset%mod+mod)%mod<<" "<<(ans_and_pair%mod+mod)%mod<<" "<<(ans_and_subset%mod+mod)%mod<<'\n';
    
    
}
signed main()
{
    
   int t;
   cin>>t;
   while(t--) solve();

   return 0;
}