#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int> arr;
vector<int> ans;
int n,k;
int fact[100100];
void arrVal(){
    for(int i=1;i<=100000;i++){
        arr.push_back(i);
    }

}
void factVal(){
    fact[0]=1;
    for(int i=1;i<=14;i++){
        fact[i]=i*fact[i-1];
    }
}
int firstInd(){
    int index;
    if(n>13){
     index = k/fact[13];
     k%= fact[13];
    }else{
        index = k/fact[n-1];
        k%=fact[n-1];
    }
    return index;
}
void rec(int n){
    if(n==0){
        for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
        cout<<'\n';
        return;
    }
    int index = firstInd();
    ans.push_back(arr[index]);
    arr.erase(arr.begin()+index);
    n--;
    rec(n);


}
void solve(){
 arrVal();
 factVal();
 
 cin>>n>>k;
 k--;
 rec(n);

}
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
    //   int _t; cin>>_t;while(_t--)
      solve();
}

// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// int n,k; 
// void solve(){
//     cin>>n>>k;
//     int a[n];
//     for(int i=1;i<=n;i++){
//         a[i-1]=i;
//     }
//     while(k>1){
//         int temp = 1;
//         int j = n-1;
//         for(int i=1; ;i++){
//             if(temp*i>=k){
//                 break;
//             }
//             temp *= i;
//             j--;
//         }
//         int val = (k + temp - 1)/temp;
//         swap(a[j],a[j+val-1]);
//         sort(a+j+1,a+n);
//         k-=(val-1)*temp;
        
//     }
//     for(int i=0;i<n;i++){
//             cout<<a[i]<<" ";
//         }


// }
// signed main(){
//       ios_base::sync_with_stdio(0);
//       cin.tie(0);cout.tie(0);
//     //   int _t; cin>>_t;while(_t--)
//       solve();
// }