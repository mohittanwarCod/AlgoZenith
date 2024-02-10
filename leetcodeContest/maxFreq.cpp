    #include <bits/stdc++.h>
    using namespace std;
    bool check(long long mid,long long k,long long x){
        long long price = 0;
        for(int i=1;i<=mid;i++){
            int cnt =1;
            int j =i;
            while(j){
                if(cnt%x==0){
                    if(j&1) price++; 
                }
                cnt++;
               j = j>>1;
            }
          
        }
        return price<=k;
    }
    long long findMaximumNumber(long long k, int x) {
        long long int lo = 1;
        long long int hi = 1e9;
        long long int ans = 1;
        while(lo<=hi){
            long long int mid = (lo+(hi-lo)/2);
            if(check(mid,k,x)){
                ans = mid;
                lo = mid+1;
            }else{
                hi = mid-1;
            }
        }
        return ans;
        
    }
    int main(){
        cout<<"hello"<<'\n';
        cout<<findMaximumNumber(9,1);
    }
