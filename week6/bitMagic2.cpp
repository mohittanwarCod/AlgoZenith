#include <bits/stdc++.h>
using namespace std;
#define int long long
int msb(int n)
{
 if(n==0) return -1;
    return  __lg(n);
}
int lsb(int n)
{
    if(n==0) return -1;
    return  __builtin_ctzll(n);
}

int biggestPow(int n)
{
    
    if (n == 0)
        return -1;
   int index =  __builtin_ctzll(n);
   return (1LL<<(index));
}
int lowestPow(int n)
{   
    bitset<64> bs(n);
    if(n<=1) return 2;
    for(int i=1;i<=63;i++){
        
            if((1LL<<(i))>=n) return (1LL<<(i));
        
    }
    
}
bool pow2(int n)
{   if(n==1) return 0; //  given condtion

    return __builtin_popcountll(n)==1;
}
void solve()
{
    int n;
    cin >> n;
    bitset<64> bs(n);
    cout << bs << '\n';
    cout << msb(n) << '\n';
    cout << lsb(n) << '\n';
    cout << pow2(n) << '\n';
    cout << biggestPow(n) << '\n';
    cout << lowestPow(n) << '\n';
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int _t;
    cin >> _t;
    while (_t--)
        solve();
}