// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// const char alpha[27] = {'0','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
// void solve(){
//     string s;
//     cin>>s;
//     string t,u;
//     multiset<int> ms;
//     for(int i=0;i<s.size();i++){
//         ms.insert(-(s[i]-'a'+1));
//     }
//     for(int i=0;i<s.size();i++){
//         int num = (s[i]-'a'+1);
//         auto  it = ms.upper_bound(-num);
//         if(it != ms.end()){
//             char ch= alpha[num];
//             t.push_back(s[i]);
           
//         }else{
//            char ch = alpha[num];
//            u.push_back(s[i]);
//         }
//         ms.erase(ms.find(-num));
        
//     }
//     reverse(t.begin(),t.end());
//     for(int i=0;i<t.size();i++){
//         u.push_back(t[i]);
//     }
//     cout<<u<<'\n';

// };
// signed main(){
//       ios_base::sync_with_stdio(0);
//       cin.tie(0);cout.tie(0);
//       int _t; cin>>_t;while(_t--)
//       solve();
// }

////////////////////*****************try to find different test cases **************/////////;
#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    string s,u;
    cin>>s;
    int n = s.size();
    stack<char> t;
    char arr[n];
    arr[n-1]=s[n-1];
    for(int i=n-2;i>=0;i--){
        if(s[i]>=arr[i+1]){
            arr[i]=arr[i+1];
        }else {
            arr[i]=s[i];
        }
    }
    
    for(int i=0;i<n;i++){
        if(i==0) t.push(s[i]); // for the case when t is empty i have no choice but to perform only the first
        // which is push the first character of s to append in t

        else {
            while(!t.empty() && t.top()<=arr[i]){ // if the top of stack is minimum 
                u.push_back(t.top());
                t.pop();
            }
            t.push(s[i]); //when the min character is present int the string s between i and end of string 
        }
    }
    while(!t.empty()){ // emptying the string t
        u.push_back(t.top());
        t.pop();
    }
    cout<<u<<'\n';
   
    
};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}