#include <bits/stdc++.h>
using namespace std;
#define int long long 
int ans = 0;
int board[15][15];
int n;
int queens[15];
bool check(int row,int col){
    // check in columns;
    for(int pr=0;pr<row;pr++){
        int pc = queens[pr];
        
        if(pc==col) {
            return false;
        }
    }
    // diagonal wise
    for(int i=row-1,j=col-1;i>=0 && j>0;i--){
        if(queens[i]==j) {
            return false;
        }
        j--;
    }
 // 
     for(int i=row-1,j=col+1;i>=0 && j<=n;i--){
        if(queens[i]==j) {
           return false;
        }
        j++;
    }

// 
int dx[8]={1,2,2,1,-1,-2,-2,-1};

int dy[8]={-2,-1,1,2,2,1,-1,-2};

for(int i=0;i<8;i++){
   if(row+dx[i]<row && col+dy>0 && col+dy[i]<=n && row+dx[i]>=0){
    if(queens[row+dx[i]]==col+dy[i]) {
        return false;
    }
   }
    
}
return true;

}
void rec(int level){
    if(level==n){
        
        ans++;
        return;
    }
    for(int ch=1;ch<=n;ch++){
        // cout<<" level "<<level<<" ch "<<ch<<endl;
        if(check(level,ch)){
            queens[level]=ch;
            rec(level+1);
            queens[level]=0;
        }
    }

    
}
void solve(){
    cin>>n;
    rec(0);
    cout<<ans<<endl;
}
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
    //   int _t; cin>>_t;while(_t--)
      solve();
}