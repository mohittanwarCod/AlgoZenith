#include <bits/stdc++.h>
using namespace std;
#define int long long
int arr[100001];                                                 // 1 
int check_peak(int mid,int n){                                   // 6 4 
    if(mid==n-1) return 1;                                       // 1  2 5 3 2 1
    if(arr[mid]>arr[mid+1]) return 1;                            
    return 0;
}


int binary_search_peak(int low,int high,int n){
    int ans = n-1;                          
    while(low<=high){
        int mid = low+(high-low)/2;
        if(check_peak(mid,n)){
            ans = mid;
            high = mid-1;

        } else {
            low = mid+1;
        }

    }
    return ans;
     
}
int binary_search_inc(int low,int high,int k){
     int ans = -1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==k){
            return mid;
           

        } else if(arr[mid]>k) {
             
            high = mid-1;
           
        }else {
            low = mid+1;
        }

    }
    return ans;

}
int binary_search_dec(int low,int high,int k){
    int ans = -1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==k){
            return mid;
           

        } else if(arr[mid]>k) {
             
            
            low = mid+1;
           
        }else {
            high = mid-1;
            
        }

    }
    return ans;

}
void solve(){
    int n,q;
    cin>>n>>q;
    for(int i=0;i<n;i++) cin>>arr[i];
    int peakInd = binary_search_peak(0,n-1,n);
    
    while(q--){
        int k;
        cin>>k;
        int firstind = binary_search_inc(0,peakInd,k);
        
        int secondInd = binary_search_dec(peakInd+1,n-1,k);
        if(firstind >= 0 ) cout<<firstind+1<<" ";
        if(secondInd >= 0) cout<<secondInd+1;
        cout<<'\n';


    }
};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}
////////////////////simple code //////////////////////
// #include<bits/stdc++.h>
// using namespace std;

// int n,q;
// vector<int> arr;

// bool check(int i){
//    if(arr[i]>arr[i-1])return 1;
//    else return 0;
// }

// void solve(){
//    cin>>n>>q;
//    arr.resize(n);
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }

//    int lo = 1;
//    int hi = n-1;
//    int peak = 0;
//    while(lo<=hi){
//        int mid = (lo+hi)/2;
//        if(check(mid)){
//            peak = mid;
//            lo = mid + 1;
//        }else{
//            hi = mid - 1;
//        }
//    }

//    while(q--){
//        int k;
//        cin>>k;

//        vector<int> final;
//        lo = 0;
//        hi = peak-1;
//        while(lo<=hi){
//            int mid = (lo+hi)/2;
//            if(arr[mid]==k){
//                final.push_back(mid+1);
//                break;
//            }else if(arr[mid]>k){
//                hi=mid-1;
//            }else{
//                lo=mid+1;
//            }
//        }

//        lo = peak;
//        hi = n-1;
//        while(lo<=hi){
//            int mid = (lo+hi)/2;
//            if(arr[mid]==k){
//                final.push_back(mid+1);
//                break;
//            }else if(arr[mid]>k){
//                lo=mid+1;
//            }else{
//                hi=mid-1;
//            }
//        }

//        for(auto v:final){
//            cout<<v<<" ";
//        }  
//        cout<<endl;
//    }
// }

// signed main(){
//    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//    int _t;cin>>_t;while(_t--)
//    solve();
// }