#include <bits/stdc++.h>
using namespace std;
// calculate a^b 10^9 + 7

int binary_exponentiation(int a,int b,int mod){
    int ans = 1;
    while(b){
        if(b%2==1){
            ans = (1LL*ans * a )%mod;
        }
        a = (1LL*a*a)%mod;
        b/=2;

    }
    return ans;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<binary_exponentiation(a,b,1e9+7)<<"\n";
}