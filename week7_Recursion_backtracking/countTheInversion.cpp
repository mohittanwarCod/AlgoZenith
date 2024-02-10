#include <bits/stdc++.h>
using namespace std;
#define int long long

void merge(int *arr,int s,int e,int &ans){
    int mid = (s+e)/2;
    int size1 = mid-s+1;
    int size2 = e-mid;
  
    int *first = new int[size1];
    int *second = new int[size2];
    int mainArrayIndex = s;
    for(int i=0;i<size1;i++){
        first[i]=arr[mainArrayIndex++];
    }
    mainArrayIndex=mid+1;
     for(int i=0;i<size2;i++){
        second[i]=arr[mainArrayIndex++];
    }

    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;
   
    while(index1<size1 && index2<size2){
        if(first[index1]<=second[index2]){
            arr[mainArrayIndex++] = first[index1++];
        }else{
             ans+= size1-index1;
            arr[mainArrayIndex++] = second[index2++];
        }

    }
     while(index1 < size1) {
        arr[mainArrayIndex++] = first[index1++];
    }

    while(index2 < size2 ) {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete []first;
    delete []second;
    

  

}

void mergeSort(int *arr,int s,int e,int &ans){
    if(s>=e) return;

    int mid = (e+s)/2;
    mergeSort(arr,s,mid,ans);
    mergeSort(arr,mid+1,e,ans);
    merge(arr,s,e,ans);

}
void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int ans = 0;
   
    mergeSort(arr,0,n-1,ans);
    
    cout<<ans<<'\n';
}
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}
