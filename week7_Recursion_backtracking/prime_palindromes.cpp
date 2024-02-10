#include <bits/stdc++.h>
using namespace std; 
using lli = long long;
lli a,b;
vector<lli> ans;
bool isPrime(lli x){
    for(int i=2;i*i<=x;i++){
        if(x%i==0) return false;
    }
    return true;
}
bool in_range(lli x){
    if(x<a || x>b || !isPrime(x)) return false;
    return true;
}
void getNumbers(lli lo,lli hi,lli mul10){
    if((hi*mul10+lo)>b) return;
    if(in_range(hi*mul10+lo)){
        ans.push_back(hi*mul10+lo);
    }
    
    for(int j=0;j<=9;j++){
        if(in_range((hi*10+j)*mul10+lo)){
            ans.push_back((hi*10+j)*mul10+lo);
        }
    }
    
     for(int j=0;j<=9;j++){
        getNumbers(j*mul10+lo,hi*10+j,mul10*10);
    }
    
    
}
void solve(){
    for(int i=2;i<=9;i++){
        if(in_range(i)) ans.push_back(i);
    }
    getNumbers(1,1,10);
    getNumbers(2,2,10);
    getNumbers(3,3,10);
    getNumbers(4,4,10);
    getNumbers(5,5,10);
    getNumbers(6,6,10);
    getNumbers(7,7,10);
    getNumbers(8,8,10);
    getNumbers(9,9,10);
    
    
    cout<<ans.size()<<endl;
    
    
}

int main()
{
    cin>>a>>b;
    solve();
}
