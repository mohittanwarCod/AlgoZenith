// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int n;
int k;
vector<vector<int>> ans;
vector<int> curr;
int arr[11];
void rec(int level){
    if(level==n+1){
        ans.push_back(curr);
        return;
    }
    for(int i=1;i<=n;i++){
        if(arr[i]!=0){
            curr.push_back(i);
            arr[i]=0;
            rec(level+1);
            arr[i]=1;
            curr.pop_back();
            
        }
    }
}
int main() {
    // Write C++ code here

    cin>>n>>k;
  
   for(int i=1;i<=n;i++) arr[i]=1;
   rec(1);
//   for(int i=0;i<ans.size();i++){
//       for(int j=0;j<n;j++) cout<<ans[i][j]<<" ";
//       cout<<endl;
//   }
   vector<int> kth = ans[k-1];
   for(int i=0;i<n;i++){
       cout<<kth[i]<<'\n';
   }

    return 0;
}