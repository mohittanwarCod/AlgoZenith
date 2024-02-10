#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int> left_position(string str,int n){
    vector<int> ans;
    map<char,int> m;
    for(int i=0;i<n;i++){
        char ch=str[i];
        if(m.find(ch)!=m.end()) ans.push_back(m[ch]);
        else ans.push_back(-1);

        m[ch]=i;
    }
    
    return ans;


}
//  j d n f g j d h z w 
vector<int> right_position(string str,int n){
    vector<int> ans;
    ans.resize(n);
    map<char,int> m;
    for(int i=n-1;i>=0;i--){
        char ch=str[i];
        if(m.find(ch)!=m.end()) ans[i]=(m[ch]);
        else ans[i]=n;

        m[ch]=i;
    }
    return ans;
}
void solve(){
   
    int n;
    cin>>n;
    string str;
    cin>>str;
    vector<int> left_pos = left_position(str,n);
    vector<int> right_pos = right_position(str,n);
  
    int sum = 0;
    for(int i=0;i<n;i++){
       sum+= (i-left_pos[i])*(right_pos[i]-i); 
    }
    cout<<sum<<'\n';
 

};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}